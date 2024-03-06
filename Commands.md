# sUrls

| S.No | Command                                                                                                      | Description                |
| ---- | ------------------------------------------------------------------------------------------------------------ | -------------------------- |
| 1    | [kubectl get pods --all-namespaces](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet#tables) | Cheatsheet of md(markdown) |
| 2    | comm                                                                                                         | comm                       |
| 3    | comm                                                                                                         | comm                       |
| 4    | comm                                                                                                         | $1600                      |
| 5    | comm                                                                                                         | $12                        |
| 6    | comm                                                                                                         | $1                         |
| 7    | comm                                                                                                         | $1600                      |
| 8    | comm                                                                                                         | $12                        |
| 9    | comm                                                                                                         | $1                         |
| 10   | comm                                                                                                         | $1600                      |
| 11   | comm                                                                                                         | $12                        |
| 12   | comm                                                                                                         | $1                         |
| 13   | comm                                                                                                         | $1600                      |
| 14   | comm                                                                                                         | $12                        |
| 15   | comm                                                                                                         | $1                         |

# Git commands (Git and Git actions)

| S.No | Command                                       | Description                                                            |
| ---- | --------------------------------------------- | ---------------------------------------------------------------------- |
| 1    | git config --global user.name "your-username" | comm                                                                   |
| 2    | git config --global user.email "your-email    | comm                                                                   |
| 3    | git init                                      | To create a repo at local system                                       |
| 4    | git status                                    | $1600                                                                  |
| 5    | git add . or git add                          | $12                                                                    |
| 6    | git commit -m ".."                            | $1                                                                     |
| 7    | git push                                      | $1600                                                                  |
| 8    | git pull                                      | $12                                                                    |
| 9    | git checkout \<commit id>                     | Temporarily move to another commit                                     |
| 9    | git checkout main                             | Again it will goes to Head -> main branch                              |
| 10   | git log                                       | shows history of commit                                                |
| 11   | git revert                                    | Undo commits(Revert changs of commi by creating a new commit           |
| 12   | git reset --hard                              | Undo changes by deletig all commits since                              |
| sno  | .gitignore                                    | A file which has the list of files/folders will be ignore while commit |
| sno  | git branch \<branch name>                     | Create a new branch                                                    |
| sno  | git merge \<name>                             | To merge a branch to another branch                                    |
| sno  | git branch                                    | Lists all existing branches                                            |
| sno  | git checkout \<branch name>                   | Switch to another branch                                               |
| sno  | git branch -D \<branch name>                  | To delete a branch                                                     |
| sno  | git branch -b \<branch name>                  | Create a branch with full data of the Main branch                      |
| sno  |                                               | c                                                                      |
| sno  | t                                             | c                                                                      |
| sno  | t                                             | c                                                                      |
| sno  | t                                             | c                                                                      |
| sno  | t                                             | c                                                                      |
| sno  | t                                             | c                                                                      |
| s    |                                               |                                                                        |
| s    |                                               |                                                                        |

# Kubernets commands

| S.No | Command                                   | Description           |
| ---- | ----------------------------------------- | --------------------- |
| 1    | kubectl get pods --all-namespaces         | Get pod details       |
| 2    | kubectl get pods --all-namespaces -o wide | Full details of Pod   |
| 3    | kubectl get nodes                         | List out nodes        |
| 4    | kubectl create ns jsmyns                  | Create a name space   |
| 5    | kubectl get ns                            | Display all ns        |
| 6    | kubectl apply or create -f yaml           | run yaml file         |
| 7    | kubectl get pods -n                       | Get pods by Namespace |
| 8    | kubectl describe pod -n                   | describe pod          |
| 9    | comm                                      | $1                    |
| 10   | comm                                      | $1600                 |
| 11   | comm                                      | $12                   |
| 12   | comm                                      | $1                    |
| 13   | comm                                      | $1600                 |
| 14   | comm                                      | $12                   |
| 15   | comm                                      | $1                    |

jssudha@master-node:~$ kubectl apply -f https://raw.githubusercontent.com/SudhakarAnemu/AI-DS-ML-DL-SRE-DRE/master/DevOps/Kbrnts/001deploynginix.yaml  
deployment.apps/nginx-deployment created

jssudha@master-node:~$ kubectl get pods -n jsmyns~  
~NAME READY STATUS RESTARTS AGE~  
~nginx-deployment-86dcfdf4c6-9zlcb 0/1 ContainerCreating 0 2m7s~  
~nginx-deployment-86dcfdf4c6-cgnj5 0/1 ContainerCreating 0 2m7s~  
~nginx-deployment-86dcfdf4c6-tt8hh 0/1 ContainerCreating 0 2m7s~  
~jssudha@master-node:~$

# Minikube installations logs

jssudha@minikube:~$ history ----> History of jssudha id.~  
~1 id~  
~2 curl -LO https://storage.googleapis.com/minikube/releases/latest/minikube-linux-amd64~  
~3 sudo install minikube-linux-amd64 /usr/local/bin/minikube~  
~4 minikube version~  
~5 curl -LO https://storage.googleapis.com/kubernetes-release/release/~`~curl -s https://storage.googleapis.com/kubernetes-release/release/stable.txt~`~/bin/linux/amd64/kubectl~  
~6 chmod +x kubectl~  
~7 sudo mv kubectl /usr/local/bin/~  
~8 kubectl version -o yaml~  
~9 minikube start --driver=docker~  
~10 minikube status~  
~11 kubectl get nodes~  
~12 kubectl cluster-info~  
~13 kubectl create deployment nginx-web --image=nginx~  
~14 kubectl expose deployment nginx-web --type NodePort --port=80~  
~15 kubectl get deployment,pod,svc~  
~16 kubectl apply -f https://raw.githubusercontent.com/SudhakarAnemu/AI-DS-ML-DL-SRE-DRE/master/DevOps/Kbrnts/001deploynginix.yaml~  
~17 kubectl create -f https://raw.githubusercontent.com/SudhakarAnemu/AI-DS-ML-DL-SRE-DRE/master/DevOps/Kbrnts/001deploynginix.yaml~  
~18 kubectl create ns jsmyns~  
~19 vi crt.yaml~  
~20 kubectl create -f crt.yaml~  
~21 kubectl get pods -n jsmyns~  
~22 history~  
~jssudha@minikube:~$ sudo su - ---------------> History of root id  
root@minikube:~\# history~  
~1 apt update~  
~2 apt upgrade -y~  
~3 exit~  
~4 sudo apt install ca-certificates curl gnupg wget apt-transport-https -y~  
~5 sudo install -m 0755 -d /etc/apt/keyrings~  
~6 curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo gpg --dearmor -o /etc/apt/keyrings/docker.gpg~  
~7 sudo chmod a+r /etc/apt/keyrings/docker.gpg~  
~8 echo "deb \[arch="$(dpkg --print-architecture)" signed-by=/etc/apt/keyrings/docker.gpg\] https://download.docker.com/linux/ubuntu~  
~9 "$(. /etc/os-release && echo "$VERSION_CODENAME")" stable" | sudo tee /etc/apt/sources.list.d/docker.list > /dev/null~  
~10 apt update~  
~11 sudo apt install -y docker-ce docker-ce-cli containerd.io docker-buildx-plugin docker-compose-plugin~  
~12 exit~  
~13 history~  
~root@minikube:~#elete
