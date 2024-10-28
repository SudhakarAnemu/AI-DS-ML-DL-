js

# Commands

## Linux

getenforce

setenforce 0

### hashing

base64

md5sum `<file>`

## Network

### netstat

netstat -an | grep `<port>`

netstat -ntlp

### tcpdump

tcpdump -A -i eth1 'port 80'

### ab - apache bench

yum -y install httpd-tools

it has ab tools, which is helpful to test load balancer

ab -n 500 localhost/  ---------> this command will send 500 requests to the load balancer

ab : apache bench

ab -n 20 -c `<port>:80`
