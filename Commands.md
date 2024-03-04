


# Urls

| S.No        | Command          | Description  |
| ------------- |:-------------:| -----:|
| 1      | [kubectl get pods --all-namespaces](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet#tables) | Cheatsheet of md(markdown) |
| 2      | comm      |   comm |
| 3 | comm     |    comm |
| 4      | comm | $1600 |
| 5      | comm      |   $12 |
| 6 | comm    |    $1 |
| 7      | comm | $1600 |
| 8      | comm      |   $12 |
| 9 | comm     |    $1 |
| 10      | comm | $1600 |
| 11      | comm      |   $12 |
| 12 | comm     |    $1 |
| 13      | comm | $1600 |
| 14      | comm      |   $12 |
| 15 | comm     |    $1 |

# Kubernets commands

| S.No        | Command          | Description  |
| ------------- |:-------------:| -----:|
| 1      | kubectl get pods --all-namespaces | Get pod details |
| 2      | kubectl get pods --all-namespaces -o wide      |   Full details of Pod |
| 3 | kubectl get nodes     |    List out nodes |
| 4      | kubectl create ns jsmyns| Create a name space |
| 5      | kubectl get ns      |   Display all ns |
| 6 | kubectl apply or create -f yaml    |    run yaml file |
| 7      | kubectl get pods -n <ns name> | Get pods by Namespace |
| 8      | kubectl describe pod <pod name> -n <ns name>      |   describe pod |
| 9 | comm     |    $1 |
| 10      | comm | $1600 |
| 11      | comm      |   $12 |
| 12 | comm     |    $1 |
| 13      | comm | $1600 |
| 14      | comm      |   $12 |
| 15 | comm     |    $1 |



jssudha@master-node:~$ kubectl apply -f https://raw.githubusercontent.com/SudhakarAnemu/AI-DS-ML-DL-SRE-DRE/master/DevOps/Kbrnts/001deploynginix.yaml
deployment.apps/nginx-deployment created

jssudha@master-node:~$ kubectl get pods -n jsmyns
NAME                                READY   STATUS              RESTARTS   AGE
nginx-deployment-86dcfdf4c6-9zlcb   0/1     ContainerCreating   0          2m7s
nginx-deployment-86dcfdf4c6-cgnj5   0/1     ContainerCreating   0          2m7s
nginx-deployment-86dcfdf4c6-tt8hh   0/1     ContainerCreating   0          2m7s
jssudha@master-node:~$







