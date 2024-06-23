
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
| 18   | docker build -t mynginx .                                                                    | Build an image by using docker file                                                                      |
| 19   | docker rmi nginx:myblog                                                                      | Remove an image                                                                                          |
| 20   | docker rmi -f \<name of the image>                                                           |delete an image|
| 7    | docker image prune                                                                           | delete images which does not have containers                                                             |
| 8    | docker system prune -a                                                                       |                                                                                                          |
| 9    | docker system df                                                                             |                                                                                                          |
| 10   | docker search jenkins                                                                        |                                                                                                          |
| 11   | docker search -- limit 5                                                                     |                                                                                                          |
| 13   | docker ps -l                                                                                 | Shows latest container                                                                                   |
| 14   | docker stop, start                                                                           |                                                                                                          |
| 15   | docker rm \<container number>                                                                |                                                                                                          |
| 3    | docker kill \<container id>                                                                  | Forcibly stop a container                                                                                |
| 5    | docker logs -t \<cont id>                                                                    |                                                                                                          |
| 6    | docker logs -tf \<cont id>                                                                   |                                                                                                          |
| 8    | curl http://localhost:8080                                                                   |                                                                                                          |
| 10   | docker info                                                                                             |shows all details of the docker, number of images, run time|
| 11   |docker container exec -it docker-exec bash|Login to the container|loging to the container
| 12   |  docker container exec -it jsnginx /bin/bash                                                                                          | i - stdin Interactive, t - tty |
| 13   |Default container command|entry point, it shows under command|
| 14   |Change the default container command|update CMD section at image file|
| 10   | docker run debian (will die)                                                                 |                                                                                                          |
| 6    | docker run -itd debian                                                                       |                                                                                                          |
| 15   |docker container run -d nginx sleep 20|it will change the default command|
| 2    |docker container run -d --restart unless-stopped nginx|Its uses on prod, it restart unless it is stopped|
| 4    | docker run -rm hello-world                                                                   | Automatically delete the docker once it stops                                                            |
| 2    | docker run -itd --restart=always --name=web debian                                           | To restart automatically when it is stop,Restart policy will be configured. When the system got rebooted |
| 7    | docker run --name ournginx -d -p 8080:80 nginx                                               | export the port of 80 container to outside 8080                                                          |
| 6    |docker container run -dt --rm --name tecstcont busybox ping -c10 google.com|automatically delete the container after 10 pings|
| 7    |docker container run --help - grep rm|shows rm only|
| 12   | docker run -itd --name=web debian                                                            |                                                                                                          |
| 9    | docker run -p 8080:80 --name web_nginx2 -v ${PWD}/webpages:/usr/share/nginx/html:ro -d nginx | dash v is for the volume                                                                                 |
| 8    |docker container exec -it 1a04ce261eda /bin/bash|Login to a container|
| 9    |docker rmi <image id>|removal of an image|
| 3    |docker rm mynginx|mynginx is a container, this command is to delete a container|
| 4    |docker system df|shows images, containers, local volumes, cache|
| 5    |docker system df -v|shows per component, full details|
| 10   |docker build .|Build - create an image|
| 11   |docker images|List out all images|
| 12   |docker build -t jsmonitor .|build an image|
| 13   |docker run -td --name tmp --health-cmd "curl -f http://localhost" busybox sh|run with health-command |
| 14   |docker run -td --name tmp --health-cmd "curl -f http://localhost" --health-interval=5s busybox sh|with health interval|
| 15   |docker run -td --name tmp --health-cmd "curl -f http://localhost" --health-interval=5s --health-retries=1 busybox sh|with health retries|
| 2    |                                                                                              |                                                                                                          |
| 3    |                                                                                              |                                                                                                          |
| 4    |                                                                                              |                                                                                                          |
| 5    |                                                                                              |                                                                                                          |
| 6    |                                                                                              |                                                                                                          |
| 7    |                                                                                              |                                                                                                          |
| 8    |                                                                                              |                                                                                                          |
| 9    |                                                                                              |                                                                                                          |
| 10   |                                                                                              |                                                                                                          |
| 11   |                                                                                              |                                                                                                          |
| 12   |                                                                                              |                                                                                                          |
| 13   |                                                                                              |                                                                                                          |
| 14   |                                                                                              |                                                                                                          |
| 15   |                                                                                              |                                                                                                          |
