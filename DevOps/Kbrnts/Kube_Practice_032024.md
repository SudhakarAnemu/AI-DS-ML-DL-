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

js

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

root@master:~/.kube# kubectl create -f https://raw.githubusercontent.com/SudhakarAnemu/AI-DS-ML-DL-SRE-DRE/master/DevOps/Kbrnts/002-createPod.yml~  
~pod/demo1 created~  
~root@master:~/.kube# kubectl get pods -o wide -n dev  
NAME    READY   STATUS    RESTARTS   AGE   IP              NODE    NOMINATED NODE   READINESS GATES  
demo1   1/1     Running   0          62s   192.168.123.2   work2   \<none>           \<none>  
root@master:~/.kube#

root@master:~/.kube# kubectl create -f https://raw.githubusercontent.com/SudhakarAnemu/AI-DS-ML-DL-SRE-DRE/master/DevOps/Kbrnts/002-createPod.yml~  
~Error from server (AlreadyExists): error when creating "https://raw.githubusercontent.com/SudhakarAnemu/AI-DS-ML-DL-SRE-DRE/master/DevOps/Kbrnts/002-createPod.yml": pods "demo1" already exists~  
~root@master:~/.kube#

root@master:~/.kube# kubectl get all -A -n dev  
NAMESPACE     NAME                                          READY   STATUS    RESTARTS   AGE  
default       pod/nginx                                     1/1     Running   0          129m  
default       pod/nginx1                                    1/1     Running   0          124m  
default       pod/nginx2                                    1/1     Running   0          124m  
dev           pod/demo1                                     1/1     Running   0          2m49s  
kube-system   pod/calico-kube-controllers-9d57d8f49-5rjrg   1/1     Running   0          143m  
kube-system   pod/calico-node-jhmvt                         1/1     Running   0          124m  
kube-system   pod/calico-node-z2lnf                         1/1     Running   0          143m  
kube-system   pod/calico-node-zvcrg                         1/1     Running   0          132m  
kube-system   pod/coredns-76f75df574-72qm4                  1/1     Running   0          144m  
kube-system   pod/coredns-76f75df574-swqnk                  1/1     Running   0          144m  
kube-system   pod/etcd-master                               1/1     Running   0          144m  
kube-system   pod/kube-apiserver-master                     1/1     Running   0          144m  
kube-system   pod/kube-controller-manager-master            1/1     Running   0          144m  
kube-system   pod/kube-proxy-gwh2p                          1/1     Running   0          124m  
kube-system   pod/kube-proxy-vgmdn                          1/1     Running   0          132m  
kube-system   pod/kube-proxy-vqljp                          1/1     Running   0          144m  
kube-system   pod/kube-scheduler-master                     1/1     Running   0          144m

NAMESPACE     NAME                 TYPE        CLUSTER-IP   EXTERNAL-IP   PORT(S)                  AGE  
default       service/kubernetes   ClusterIP   10.96.0.1    \<none>        443/TCP                  144m  
kube-system   service/kube-dns     ClusterIP   10.96.0.10   \<none>        53/UDP,53/TCP,9153/TCP   144m

NAMESPACE     NAME                         DESIRED   CURRENT   READY   UP-TO-DATE   AVAILABLE   NODE SELECTOR            AGE  
kube-system   daemonset.apps/calico-node   3         3         3       3            3           kubernetes.io/os=linux   143m  
kube-system   daemonset.apps/kube-proxy    3         3         3       3            3           kubernetes.io/os=linux   144m

NAMESPACE     NAME                                      READY   UP-TO-DATE   AVAILABLE   AGE  
kube-system   deployment.apps/calico-kube-controllers   1/1     1            1           143m  
kube-system   deployment.apps/coredns                   2/2     2            2           144m

NAMESPACE     NAME                                                DESIRED   CURRENT   READY   AGE  
kube-system   replicaset.apps/calico-kube-controllers-9d57d8f49   1         1         1       143m  
kube-system   replicaset.apps/coredns-76f75df574                  2         2         2       144m  
root@master:~/.kube#
