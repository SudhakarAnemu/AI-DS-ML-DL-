# JS

# Features

a. Webserver (tomcat)

b. Proxy and mail proxy

c. Caching is core function of Proxy (http proxy)

d. Security - Keep one server before all number of webservers (one entry point)

    it can handle ssl/tls

e. Proxy can compress the response

f. Load balancer (load balancing)

g. High performance

h. Low resource usage

i, Faster static resources

j, higer concurrency 

## Kubernets

a. Ingress controller

b. Load balancer

c.

# Use cases

1. Netflix

# Logs

/var/log/nginx/access.log

# Commands

## enable, stop, start, reload

systemctl enable nginx

systemctl stop nginix

systemctl start nginx

systemctl status nginx

systemctl reload nginx

## * Version :

  /usr/sbin/nginx -v

nginx -v

## Configfile and paths

nginx.conf

/etc/nginx

log=/var/log/nginx/

/var/log/nginx/error.log

/var/log/nginx/access.log

worker_process 2 --> Here 2 worker processes will run

/usr/share/nginx/html -> it has all required html files.

## Command Lline options

nginx -v  - gives version

nginx -V  - shows varias config details

nginx -t -. shows whether config file is okay or not

nginx -h : help

## Include directive

Multiple other config files can be define at the specified path.

include /etc/nginx/conf.d/*.conf;

# Other

---

## nginx

Nginix

| S.No | Command                                                               | Description                                                                                       |
| ---- | --------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------- |
| 1    | /usr/sbin/nginx -v                                                    | Verify the version                                                                                |
| 5    |                                                                       | status, stop, start, enable, disable                                                              |
| 6    | http://34.132.249.98/                                                 | Call the public ip to access Nginx home page                                                      |
| 7    | http://34.132.249.98/sudha.html, http://54.162.143.66:8080/sudha.html | Call the page, path is /var/www/html - ubuntu, /usr/share/nginx/html - centos                     |
| 8    | /usr/sbin/nginx                                                       | Nginx installation path                                                                           |
| 9    | /etc/nginx/nginx.conf                                                 | Configuraton file                                                                                 |
| 10   | Master process running with root                                      |                                                                                                   |
| 11   | Worker process running with user id on config file                    |                                                                                                   |
| 12   | error.log, access.log Has all log details                             | /var/log/nginx                                                                                    |
| 13   | /var/run/nginx.pid                                                    | This file has the process id of the nginx                                                         |
| 14   | access_log /var/log/nginx/access.log;                                 | It has both Get and Pull                                                                          |
| 15   | nginx -v                                                              | Print nginx version                                                                               |
| 1    | nginx -V                                                              | shows greate amoun of running web nginx                                                           |
| 2    | nginx -t                                                              | Shows whether configuratio is okay and success                                                    |
| 3    | nginx -h                                                              | Shows help                                                                                        |
| 4    | /etc/nginx/conf.d/*.conf;                                             | Has all configuration files                                                                       |
| 5    | /etc/nginx/sites-available/default                                    | This file has port 80, index files                                                                |
| 6    | netstat -ntlp                                                         | Shows current running ports                                                                       |
| 7    | Reverse proxy                                                         | is type of proxy server which retrieves resources on behalf of a client from one or more servers. |
| 8    |                                                                       |                                                                                                   |
| 9    |                                                                       |                                                                                                   |
| 10   |                                                                       |                                                                                                   |
| 11   |                                                                       |                                                                                                   |
| 12   |                                                                       |                                                                                                   |
| 13   |                                                                       |                                                                                                   |
| 14   |                                                                       |                                                                                                   |
| 15   |                                                                       |                                                                                                   |
| 1    |                                                                       |                                                                                                   |
| 2    |                                                                       |                                                                                                   |
| 3    |                                                                       |                                                                                                   |
| 4    |                                                                       |                                                                                                   |
| 5    |                                                                       |                                                                                                   |
| 6    |                                                                       |                                                                                                   |
| 7    |                                                                       |                                                                                                   |
| 8    |                                                                       |                                                                                                   |
| 9    |                                                                       |                                                                                                   |
| 10   |                                                                       |                                                                                                   |
| 11   |                                                                       |                                                                                                   |
| 12   |                                                                       |                                                                                                   |
| 13   |                                                                       |                                                                                                   |
| 14   |                                                                       |                                                                                                   |
| 15   |                                                                       |                                                                                                   |
| 1    |                                                                       |                                                                                                   |
| 2    |                                                                       |                                                                                                   |
| 3    |                                                                       |                                                                                                   |
| 4    |                                                                       |                                                                                                   |
| 5    |                                                                       |                                                                                                   |
| 6    |                                                                       |                                                                                                   |
| 7    |                                                                       |                                                                                                   |
| 8    |                                                                       |                                                                                                   |
| 9    |                                                                       |                                                                                                   |
| 10   |                                                                       |                                                                                                   |
| 11   |                                                                       |                                                                                                   |
| 12   |                                                                       |                                                                                                   |
| 13   |                                                                       |                                                                                                   |
| 14   |                                                                       |                                                                                                   |
| 15   |                                                                       |                                                                                                   |
| 1    |                                                                       |                                                                                                   |
| 2    |                                                                       |                                                                                                   |
| 3    |                                                                       |                                                                                                   |
| 4    |                                                                       |                                                                                                   |
| 5    |                                                                       |                                                                                                   |
| 6    |                                                                       |                                                                                                   |
| 7    |                                                                       |                                                                                                   |
| 8    |                                                                       |                                                                                                   |
| 9    |                                                                       |                                                                                                   |
| 10   |                                                                       |                                                                                                   |
| 11   |                                                                       |                                                                                                   |
| 12   |                                                                       |                                                                                                   |
| 13   |                                                                       |                                                                                                   |
| 14   |                                                                       |                                                                                                   |
| 15   |                                                                       |                                                                                                   |
| 1    |                                                                       |                                                                                                   |
| 2    |                                                                       |                                                                                                   |
| 3    |                                                                       |                                                                                                   |
| 4    |                                                                       |                                                                                                   |
| 5    |                                                                       |                                                                                                   |
| 6    |                                                                       |                                                                                                   |
| 7    |                                                                       |                                                                                                   |
| 8    |                                                                       |                                                                                                   |
| 9    |                                                                       |                                                                                                   |
| 10   |                                                                       |                                                                                                   |
| 11   |                                                                       |                                                                                                   |
| 12   |                                                                       |                                                                                                   |
| 13   |                                                                       |                                                                                                   |
| 14   |                                                                       |                                                                                                   |
| 15   |                                                                       |                                                                                                   |
| 1    |                                                                       |                                                                                                   |
| 2    |                                                                       |                                                                                                   |
| 3    |                                                                       |                                                                                                   |
| 4    |                                                                       |                                                                                                   |
| 5    |                                                                       |                                                                                                   |
| 6    |                                                                       |                                                                                                   |
| 7    |                                                                       |                                                                                                   |
| 8    |                                                                       |                                                                                                   |
| 9    |                                                                       |                                                                                                   |
| 10   |                                                                       |                                                                                                   |
| 11   |                                                                       |                                                                                                   |
| 12   |                                                                       |                                                                                                   |
| 13   |                                                                       |                                                                                                   |
| 14   |                                                                       |                                                                                                   |
| 15   |                                                                       |                                                                                                   |
| 1    |                                                                       |                                                                                                   |
| 2    |                                                                       |                                                                                                   |
| 3    |                                                                       |                                                                                                   |
| 4    |                                                                       |                                                                                                   |
| 5    |                                                                       |                                                                                                   |
| 6    |                                                                       |                                                                                                   |
| 7    |                                                                       |                                                                                                   |
| 8    |                                                                       |                                                                                                   |
| 9    |                                                                       |                                                                                                   |
| 10   |                                                                       |                                                                                                   |
| 11   |                                                                       |                                                                                                   |
| 12   |                                                                       |                                                                                                   |
| 13   |                                                                       |                                                                                                   |
| 14   |                                                                       |                                                                                                   |
| 15   |                                                                       |                                                                                                   |
| 1    |                                                                       |                                                                                                   |
| 2    |                                                                       |                                                                                                   |
| 3    |                                                                       |                                                                                                   |
| 4    |                                                                       |                                                                                                   |
| 5    |                                                                       |                                                                                                   |
| 6    |                                                                       |                                                                                                   |
| 7    |                                                                       |                                                                                                   |
| 8    |                                                                       |                                                                                                   |
| 9    |                                                                       |                                                                                                   |
| 10   |                                                                       |                                                                                                   |
| 11   |                                                                       |                                                                                                   |
| 12   |                                                                       |                                                                                                   |
| 13   |                                                                       |                                                                                                   |
| 14   |                                                                       |                                                                                                   |
| 15   |                                                                       |                                                                                                   |
| 1    |                                                                       |                                                                                                   |
| 2    |                                                                       |                                                                                                   |
| 3    |                                                                       |                                                                                                   |
| 4    |                                                                       |                                                                                                   |
| 5    |                                                                       |                                                                                                   |
| 6    |                                                                       |                                                                                                   |
| 7    |                                                                       |                                                                                                   |
| 8    |                                                                       |                                                                                                   |
| 9    |                                                                       |                                                                                                   |
| 10   |                                                                       |                                                                                                   |
| 11   |                                                                       |                                                                                                   |
| 12   |                                                                       |                                                                                                   |
| 13   |                                                                       |                                                                                                   |
| 14   |                                                                       |                                                                                                   |
| 15   |                                                                       |                                                                                                   |
