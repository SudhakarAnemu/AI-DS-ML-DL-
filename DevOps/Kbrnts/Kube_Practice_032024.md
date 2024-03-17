- 1

root@master:~# kubectl cluster-info  
Kubernetes control plane is running at https://10.128.0.12:6443  
CoreDNS is running at https://10.128.0.12:6443/api/v1/namespaces/kube-system/services/kube-dns:dns/proxy

To further debug and diagnose cluster problems, use 'kubectl cluster-info dump'.  
root@master:~#

- 2

root@master:~\# kubectl create -f ns.yml~  
~namespace/dev created~  
~root@master:~\# kubectl get ns  
NAME              STATUS   AGE  
default           Active   122m  
dev               Active   6s  
kube-node-lease   Active   122m  
kube-public       Active   122m  
kube-system       Active   122m  
root@master:~#
