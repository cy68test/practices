#include <sys/socket.h>
#include <sys/un.h>
#include <stdio.h>

#define SV_SOCK_PATH "/tmp/us_xfr"
#define BUF_SIZE 100


int main(int argc, char* argv[])
{
  const char* SOCKNAME = "/tmp/mysock";
  struct sockaddr_un addr;
  int sfd, cfd;
  ssize_t numRead;
  char buf[BUF_SIZE];

  sfd = socket(AF_UNIX, SOCK_STREAM, 0);

  if (sfd == -1)
    printf("error\n");

  memset(&addr, 0, sizeof(struct sockaddr_un)); /* Clear structure */
  addr.sun_family = AF_UNIX;
  strncpy(addr.sun_path, SOCKNAME, sizeof(addr.sun_path) -1);
  if(bind(sfd, (struct sockaddr *)&addr, sizeof(struct sockaddr_un) -1) == -1)
    printf("bind error\n");
  return 0;
}
