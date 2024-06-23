
# Docker

| S.No | Command   rm                                                                                   | Description                                                                                              |
| ---- | -------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------- |
| 1    | /var/lib/docker                                                                              | Working dir                                                                                              |
| 2    | systemctl enable docker                                                                      |                                                                                                          |
| 3    | systemctl start docker                                                                       |                                                                                                          |
| 4    | systemctl stop docker                                                                        |                                                                                                          |
| 5    | docker version                                                                               |                                                                                                          |
| 6    | docker ps, docker ps -a                                                                      |                                                                                                          |
| 7    | docker stop \<container id>                                                                  |                                                                                                          |
| 8    | docker ps -a                                                                                 |                                                                                                          |
| 9   | docker images                                                                                |                                                                                                          |
| 10   | docker inspect \<container id>                                                               |                                                                                                          |
| 11   | docker -help                                                                                 |                                                                                                          |
| 12   | docker pull nginx                                                                            |                                                                                                          |
| 13   | docker history nginx                                                                         |                                                                                                          |
| 14   | docker images --no-trunc                                                                     |                                                                                                          |
| 15   | docker tag nginx:latest nginx:myblog_stable                                                  |                                                                                                          |
| 16   | docker build -t mynginx .                                                                    | Build an image by using docker file                                                                      |
| 17   | docker rmi nginx:myblog                                                                      | Remove an image                                                                                          |
| 18   | docker rmi -f \<name of the image>                                                           |delete an image|
| 19   | docker image prune                                                                           | delete images which does not have containers                                                             |
| 20   | docker system prune -a                                                                       |                                                                                                          |
| 21  | docker system df                                                                             |                                                                                                          |
| 22  | docker search jenkins                                                                        |                                                                                                          |
| 23  | docker search -- limit 5                                                                     |                                                                                                          |
| 24  | docker ps -l                                                                                 | Shows latest container                                                                                   |
| 25   | docker stop, start                                                                           |                                                                                                          |
| 26   | docker rm \<container number>                                                                |                                                                                                          |
| 27    | docker kill \<container id>                                                                  | Forcibly stop a container                                                                                |
| 28    | docker logs -t \<cont id>                                                                    |                                                                                                          |
| 29    | docker logs -tf \<cont id>                                                                   |                                                                                                          |
| 30    | curl http://localhost:8080                                                                   |                                                                                                          |
| 31   | docker info                                                                                             |shows all details of the docker, number of images, run time|
| 32   |docker container exec -it docker-exec bash|Login to the container|loging to the container
| 33   |  docker container exec -it jsnginx /bin/bash                                                                                          | i - stdin Interactive, t - tty |
| 34   |Default container command|entry point, it shows under command|
| 35   |Change the default container command|update CMD section at image file|
| 36   | docker run debian (will die)                                                                 |                                                                                                          |
| 37    | docker run -itd debian                                                                       |                                                                                                          |
| 38   |docker container run -d nginx sleep 20|it will change the default command|
| 39    |docker container run -d --restart unless-stopped nginx|Its uses on prod, it restart unless it is stopped|
| 40    | docker run -rm hello-world                                                                   | Automatically delete the docker once it stops                                                            |
| 41    | docker run -itd --restart=always --name=web debian                                           | To restart automatically when it is stop,Restart policy will be configured. When the system got rebooted |
| 42    | docker run --name ournginx -d -p 8080:80 nginx                                               | export the port of 80 container to outside 8080                                                          |
| 43    |docker container run -dt --rm --name tecstcont busybox ping -c10 google.com|automatically delete the container after 10 pings|
| 44    |docker container run --help - grep rm|shows rm only|
| 45   | docker run -itd --name=web debian                                                            |                                                                                                          |
| 46    | docker run -p 8080:80 --name web_nginx2 -v ${PWD}/webpages:/usr/share/nginx/html:ro -d nginx | dash v is for the volume                                                                                 |
| 47    |docker container exec -it 1a04ce261eda /bin/bash|Login to a container|
| 48    |docker rmi <image id>|removal of an image|
| 49    |docker rm mynginx|mynginx is a container, this command is to delete a container|
| 50    |docker system df|shows images, containers, local volumes, cache|
| 51    |docker system df -v|shows per component, full details|
| 52   |docker build .|Build - create an image|
| 53   |docker images|List out all images|
| 54   |docker build -t jsmonitor .|build an image|
| 55   |docker run -td --name tmp --health-cmd "curl -f http://localhost" busybox sh|run with health-command |
| 56   |docker run -td --name tmp --health-cmd "curl -f http://localhost" --health-interval=5s busybox sh|with health interval|
| 57   |docker run -td --name tmp --health-cmd "curl -f http://localhost" --health-interval=5s --health-retries=1 busybox sh|with health retries|
| 58    |CMD in docker file|it can be overridden when we create a run time env|
| 59    |ENTRYPOINT in docker file|Cant be override instead it will append the command|
| 60    |WORKDIR|sets base pwd, later commands will use this path as base|
| 61    |                                                                                              |                                                                                                          |
| 62    |                                                                                              |                                                                                                          |
| 63    |                                                                                              |                                                                                                          |
| 64    |                                                                                              |                                                                                                          |
| 65    |                                                                                              |                                                                                                          |
| 66   |                                                                                              |                                                                                                          |
| 67   |                                                                                              |                                                                                                          |
| 68   |                                                                                              |                                                                                                          |
| 69   |                                                                                              |                                                                                                          |
| 70   |                                                                                              |                                                                                                          |
| 71   |                                                                                              |                                                                                                          |
| 71    |                                                                                              |                                                                                                          |
| 72    |                                                                                              |                                                                                                          |
| 73    |                                                                                              |                                                                                                          |
| 74    |                                                                                              |                                                                                                          |
| 75    |                                                                                              |                                                                                                          |
| 76   |                                                                                              |                                                                                                          |
| 77   |                                                                                              |                                                                                                          |
| 78   |                                                                                              |                                                                                                          |
| 79   |                                                                                              |                                                                                                          |
| 80   |                                                                                              |                                                                                                          |
| 81    |                                                                                              |                                                                                                          |
| 82    |                                                                                              |                                                                                                          |
| 83    |                                                                                              |                                                                                                          |
| 84    |                                                                                              |                                                                                                          |
| 85    |                                                                                              |                                                                                                          |
| 86   |                                                                                              |                                                                                                          |
| 87   |                                                                                              |                                                                                                          |
| 88   |                                                                                              |                                                                                                          |
| 89   |                                                                                              |                                                                                                          |
| 90   |                                                                                              |                                                                                                          |
| 91   |                                                                                              |                                                                                                          |

