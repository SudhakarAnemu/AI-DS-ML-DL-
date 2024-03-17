# httUrls

| S.No | Command                                                                                                      | Description                          |
| ---- | ------------------------------------------------------------------------------------------------------------ | ------------------------------------ |
| 1    | [kubectl get pods --all-namespaces](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet#tables) | Cheatsheet of md(markdown)           |
| 2    | https://radixweb.com/blog/installing-npm-and-nodejs-on-windows-and-mac                                       | npm, nodejs installations on windows |
| 3    | comm                                                                                                         | comm                                 |
| 4    | comm                                                                                                         | $1600                                |
| 5    | comm                                                                                                         | $12                                  |
| 6    | comm                                                                                                         | $1                                   |
| 7    | comm                                                                                                         | $1600                                |
| 8    | comm                                                                                                         | $12                                  |
| 9    | comm                                                                                                         | $1                                   |
| 10   | comm                                                                                                         | $1600                                |
| 11   | comm                                                                                                         | $12                                  |
| 12   | comm                                                                                                         | $1                                   |
| 13   | comm                                                                                                         | $1600                                |
| 14   | comm                                                                                                         | $12                                  |
| 15   | comm                                                                                                         | $1                                   |

Sample

| S.No | Command | Description |
| ---- | ------- | ----------- |
| 1    |         |             |
| 2    |         |             |
| 3    |         |             |
| 4    |         |             |
| 5    |         |             |
| 6    |         |             |
| 7    |         |             |
| 8    |         |             |
| 9    |         |             |
| 10   |         |             |
| 11   |         |             |
| 12   |         |             |
| 13   |         |             |
| 14   |         |             |
| 15   |         |             |

Minikube :

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

# Git commands (Git and Git actions)

| S.No | Command                                              | Description                                                                           |
| ---- | ---------------------------------------------------- | ------------------------------------------------------------------------------------- |
| 1    | git config --global user.name "your-username"        | comm                                                                                  |
| 2    | git config --global user.email "your-email           | comm                                                                                  |
| 3    | git init                                             | To create a repo at local system                                                      |
| 4    | git status                                           | Shows the staged data                                                                 |
| 5    | git add . or git add                                 | Staging : add updted files.                                                           |
| 6    | git commit -m ".."                                   | Ssve all changes to git hub                                                           |
| 7    | git push                                             | Push from local to remote                                                             |
| 8    | git pull                                             | Download from remote to local                                                         |
| 9    | git checkout \<commit id>                            | Temporarily move to another commit                                                    |
| 9    | git checkout main                                    | Again it will goes to Head -> main branch                                             |
| 10   | git log                                              | shows history of commit                                                               |
| 11   | git revert                                           | Undo commits(Revert changs of commi by creating a new commit                          |
| 12   | git reset --hard                                     | Undo changes by deletig all commits since                                             |
| sno  | .gitignore                                           | A file which has the list of files/folders will be ignore while commit                |
| sno  | git branch \<branch name>                            | Create a new branch                                                                   |
| sno  | git merge \<branch name>                             | To merge a branch to another branch                                                   |
| sno  | git branch                                           | Lists all existing branches                                                           |
| sno  | git checkout \<branch name>                          | Switch to another branch                                                              |
| sno  | git branch -D \<branch name>                         | To delete a branch                                                                    |
| sno  | git branch -b \<branch name>                         | Create a branch with full data of the Main branch                                     |
| sno  | git remote add origin/any name \<url>                | Connected to local Git repos via this command. Then new commits will goes to new Repo |
| sno  | git push --set-upstream origin main                  | Set the remote as upstream                                                            |
| sno  | git pull                                             | c                                                                                     |
| sno  | git push \<origin> main                              | c                                                                                     |
| sno  | git remote set-url origin https://\<username>@\<url> | set for our uid. Initially we will get permission error.                              |
| sno  | git push origin main                                 | Here we have to give token to add / commit.                                           |
| s    | git checkout -b \<branch>                            | create and switch to a branch if it is not exists                                     |
| s    | git push origin \<branch name>                       |                                                                                       |
| sno  | git checkout main -> git merge \<branch>             | c                                                                                     |
| sno  | git clone \<repo url"                                | c                                                                                     |
| sno  | git remote                                           | Shows all connected remote repo's                                                     |
| sno  | git remote get-url --all origin                      | Shows the origin of the git repository                                                |
| sno  | git remote set-url origin \<full path of the URL"    | Configure an url                                                                      |
| s    | git clone \<url> RepoName                            |                                                                                       |
| sno  | GitHub Actions - GitHubActions                       | GitHub Actions                                                                        |
| sno  | git remote add origin https://\<username>@\<gitUrl>  | By this, we can push our code to this repo                                            |
| sno  | git push --set-upstream origin main                  | Push to remote repo                                                                   |
| sno  | Contiune from 40th slide                             | c                                                                                     |
| sno  | t                                                    | c                                                                                     |
| s    |                                                      |                                                                                       |
| s    |                                                      |                                                                                       |
| sno  | t                                                    | c                                                                                     |
| sno  | t                                                    | c                                                                                     |
| sno  | t                                                    | c                                                                                     |
| sno  | t                                                    | c                                                                                     |
| sno  | t                                                    | c                                                                                     |
| s    |                                                      |                                                                                       |
| s    |                                                      |                                                                                       |
| sno  | t                                                    | c                                                                                     |
| sno  | t                                                    | c                                                                                     |
| sno  | t                                                    | c                                                                                     |
| sno  | t                                                    | c                                                                                     |
| sno  | t                                                    | c                                                                                     |
| s    |                                                      |                                                                                       |
| s    |                                                      |                                                                                       |

# cloenKubernets commands

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

jssudha@master-node:$ kubectl get pods -n jsmyns  
NAME READY STATUS RESTARTS AGE  
nginx-deployment-86dcfdf4c6-9zlcb 0/1 ContainerCreating 0 2m7s  
nginx-deployment-86dcfdf4c6-cgnj5 0/1 ContainerCreating 0 2m7s  
nginx-deployment-86dcfdf4c6-tt8hh 0/1 ContainerCreating 0 2m7s  
jssudha@master-node:$ \</p>

Minikube installation logs :

jssudha@minikube:$ history ----> History of jssudha id.  
1 id  
2 curl -LO https://storage.googleapis.com/minikube/releases/latest/minikube-linux-amd64  
3 sudo install minikube-linux-amd64 /usr/local/bin/minikube  
4 minikube version  
5 curl -LO https://storage.googleapis.com/kubernetes-release/release/~\`~curl -s https://storage.googleapis.com/kubernetes-release/release/stable.txt~\`~/bin/linux/amd64/kubectl  
6 chmod +x kubectl  
7 sudo mv kubectl /usr/local/bin/  
8 kubectl version -o yaml  
9 minikube start --driver=docker  
10 minikube status  
11 kubectl get nodes  
12 kubectl cluster-info  
13 kubectl create deployment nginx-web --image=nginx  
14 kubectl expose deployment nginx-web --type NodePort --port=80  
15 kubectl get deployment,pod,svc  
16 kubectl apply -f https://raw.githubusercontent.com/SudhakarAnemu/AI-DS-ML-DL-SRE-DRE/master/DevOps/Kbrnts/001deploynginix.yaml  
17 kubectl create -f https://raw.githubusercontent.com/SudhakarAnemu/AI-DS-ML-DL-SRE-DRE/master/DevOps/Kbrnts/001deploynginix.yaml  
18 kubectl create ns jsmyns  
19 vi crt.yaml  
20 kubectl create -f crt.yaml  
21 kubectl get pods -n jsmyns  
22 history  
jssudha@minikube:$ sudo su - ---------------> History of root id  
root@minikube:# history  
1 apt update  
2 apt upgrade -y  
3 exit  
4 sudo apt install ca-certificates curl gnupg wget apt-transport-https -y  
5 sudo install -m 0755 -d /etc/apt/keyrings  
6 curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo gpg --dearmor -o /etc/apt/keyrings/docker.gpg  
7 sudo chmod a+r /etc/apt/keyrings/docker.gpg  
8 echo "deb \[arch="$(dpkg --print-architecture)" signed-by=/etc/apt/keyrings/docker.gpg\] https://download.docker.com/linux/ubuntu  
9 "$(. /etc/os-release && echo "$VERSION_CODENAME")" stable" | sudo tee /etc/apt/sources.list.d/docker.list > /dev/null  
10 apt update  
11 sudo apt install -y docker-ce docker-ce-cli containerd.io docker-buildx-plugin docker-compose-plugin  
12 exit  
13 history  
root@minikube:#eleteI\<bchangnne\<ur- G--m, nodejsWindow
