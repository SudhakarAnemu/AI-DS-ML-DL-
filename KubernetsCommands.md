

# Minikube :

| S.No | Command                                                                  | Description          |
| ---- | ------------------------------------------------------------------------ | -------------------- |
| 1    | /usr/local/bin/minikube profile list                                     | List out the profile |
| 2    | minikube start --nodes 2                                                 |                      |
| 3    | minikube start --driver=docker                                           |                      |
| 4    | minikube status                                                          |                      |
| 5    | minikube stop                                                            |                      |
| 6    | kubectl describe node minikube                                           |                      |
| 7    | kubectl get pods -A                                                      |                      |
| 8    | kubectl logs pod/\<pod name> -n dev                                      |                      |
| 9    | kubectl describe pod/\<pod name> -n dev                                  |                      |
| 10   | kubectl delete pod/\<name> -n dev                                        |                      |
| 11   | sudo kubectl api-resources                                               |                      |
| 12   | sudo kubectl describe pod/coredns-5dd5756b68-7w466 -n kube-system        |                      |
| 13   | sudo kubectl logs pod/coredns-5dd5756b68-7w466 -n kube-system            |                      |
| 14   | kubectl edit pod/coredns-5dd5756b68-7w466 -n kube-system                 |                      |
| 15   | sudo kubectl edit pod/coredns-5dd5756b68-7w466 -n kube-system            |                      |
| 3    | sudo kubectl logs pod/coredns-5dd5756b68-7w466 -c coredns -n kube-system |                      |
| 4    | sudo kubectl describe node minikube                                      |                      |
| 5    | kubectl get namespace                                                    |                      |
| 6    | kubectl create namespace dev                                             |                      |
| 7    |                                                                          |                      |
| 8    |                                                                          |                      |
| 9    |                                                                          |                      |
| 10   |                                                                          |                      |
| 11   |                                                                          |                      |
| 12   |                                                                          |                      |
| 13   |                                                                          |                      |
| 14   |                                                                          |                      |
| 15   |                                                                          |                      |
| 3    |                                                                          |                      |
| 4    |                                                                          |                      |
| 5    |                                                                          |                      |
| 6    |                                                                          |                      |
| 7    |                                                                          |                      |
| 8    |                                                                          |                      |
| 9    |                                                                          |                      |
| 10   |                                                                          |                      |
| 11   |                                                                          |                      |
| 12   |                                                                          |                      |
| 13   |                                                                          |                      |
| 14   |                                                                          |                      |
| 15   |                                                                          |                      |
| 3    |                                                                          |                      |
| 4    |                                                                          |                      |
| 5    |                                                                          |                      |
| 6    |                                                                          |                      |
| 7    |                                                                          |                      |
| 8    |                                                                          |                      |
| 9    |                                                                          |                      |
| 10   |                                                                          |                      |
| 11   |                                                                          |                      |
| 12   |                                                                          |                      |
| 13   |                                                                          |                      |
| 14   |                                                                          |                      |
| 15   |                                                                          |                      |
| 15   |this is a new linge |updated by deepa|



# Kubernets commands

| S.No | Command | Description |
| ---- | ------- | ----------- |
| 1    |Install Urls|https://www.openwriteup.com/             |
| 2    |Install Urls|https://github.com/lerndevops/kubernetes             |
| 3    |kubectl get all --all-namespaces|Gets info from all NSs|
| 4    |kubectl get nodes -o wide|Gets node details + Master|
| 5    |kubeadm token create --print-join-command|OP should be run on worker nodes|
| 6    |kubectl get pods --all-namespaces -o wide|             |
| 7    |kubectl run nginx --image=nginx -n ns|             |
| 8    |kubectl get namespaces, kubectl get ns|             |
| 9    |kubectl get pods -n kube-system|             |
| 10   |kubectl create ns jsns|             |
| 11   |kubectl describe pod nginx -n jsns|             |
| 12   |kubectl describe pod jsmypod -n jsns|             |
| 12   |kubectl run nginx2 --image nginx -n jsns|             |
| 13   |kubectl api-resources |             |
| 14   |  kubectl explain Pod      |   explain =pod, ingresses, ns          |
| 15   |  kubectl create -f pods.yaml   |    create of apply         |
| 16   | kubectl run mynginx --image nginx -n jsns --dry-run=client -o yaml  |   Imperative commands       |
| 17   |   kubectl describe pod -n jsns jsmypod |             |
| 18   |Single container pod|             |
| 18   |Multi container pod|             |
| 19   |Init container pod       |It starts before the actual container starts, it will destroy before starting the main container, we can have multiple init containers  |
| 20   |Delete a pod|kubectl delete pod myapp-pod1 -n jsns|
| 21   |watch command|gives output for every 2 seconds|
| 22   |     Static pod-will be create it on worker node    |Kubelet will create a pod and there is no involvement of api server|
| 23   |paths|/var/lib/kubelet, /etc/kubernetes|
| 24   |root@node2:/etc/kubernetes/manifests#|pods will be created for the yml file mentioned in this directory|
| 25   |   How to find the difference between normal and static pod      |static pods will append with the name of node. Ex : tomcatpod-node2|
| 24   |Types of multi containers|1. Ambassedor, 2. sidecar, 3. Adapter|
| 25   | Check logs of pods        |     kubectl logs mc1 -n jsns        |
| 26   | Check running logs of a pod        |  kubectl logs -f mc1 -n jsns           |
| 27   | kubectl exec -it -n jsns mc1 -c 1st -- /bin/bash        |     Go inside the container, mc1 is a pod and 1st is a container        |
| 28   |  kubectl explain replicaset       |   Shows all options of the replicaset          |
| 29   |3 Imp points for the Replica set         | 1. replica 2. selector 3. template            |
| 30   | kubectl get replicaset -n jsns -o wide        |    List out all replicasets         |
| 31   |  kubectl scale replicaset myrs -n jsns --replicas 10 or we can update at the yml file      |  Increase or decrease the number of pods at the replicaset           |
| 32   |     kubectl delete pod <pod> -n jsns    |  Delete a pod           |
| 33   |         |             |
| 31   |         |             |
| 32   |         |             |
| 33   |         |             |
| 31   |         |             |
| 32   |         |             |
| 33   |         |             |
| 31   |         |             |
| 32   |         |             |
| 33   |         |             |
| 31   |         |             |
| 32   |         |             |
| 33   |         |             |
| 31   |         |             |
| 32   |         |             |
| 33   |         |             |
| 31   |         |             |
| 32   |         |             |
| 33   |         |             |
| 31   |         |             |
| 32   |         |             |
| 33   |         |             |


