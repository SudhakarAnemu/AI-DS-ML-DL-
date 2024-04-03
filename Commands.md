# Sample

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

# Ansible

| S.No | Command                                                              | Description                                                                                                      |
| ---- | -------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------- |
| 1    | /etc/ansible/ansible.cfg                                             | default config file                                                                                              |
| 2    | $ANSIBLE_CONFIG=/opt/ansible-web.cfg ansible-playbook playbook.yml   | User defined config path                                                                                         |
| 3    | Sequence of config files                                             |                                                                                                                  |
| 4    | a. /opt/ansible-web.cfg                                              |                                                                                                                  |
| 5    | b. /opt/web-playbooks/ansible.cfg                                    |                                                                                                                  |
| 6    | c. .ansible.cfg                                                      |                                                                                                                  |
| 7    | d. /etc/ansible/ansible.cfg                                          |                                                                                                                  |
| 8    | Env varibales. ex : gathering=implicit                               | ANSIBLE_GATHERING=explicit                                                                                       |
| 9    | for global : export ANSIBLE_GATHERING=explicit                       |                                                                                                                  |
| 10   | ansible-config list                                                  | Lists all configurations                                                                                         |
| 11   | ansible-config view                                                  | shows the current config file                                                                                    |
| 12   | ansible-config dump                                                  | shows the current settings                                                                                       |
| 13   | /etc/ansible/hosts                                                   | Default location of the inventory file                                                                           |
| 14   | Inventory parameters                                                 | ansible_connection - ssh/winrm/localhost, ansible_port-22/5986 ansible_user-root/admin ansible_ssh_pass-Password |
| 15   | For linux : ansible_ssh_pass, For windows : ansible_password         |                                                                                                                  |
| 16   | \[db\] web1 \[all_servers:children\] db                              |                                                                                                                  |
| 17   | /etc/ansible/hosts                                                   | This hosts file, obj's will be created in memory on the run time                                                 |
| 18   | Precedence of variables                                              | 1\. Extra 2. Play 3. Host 4. Group                                                                               |
| 19   | register: result, result.rc, result.stdout has its own data          | result can be pass from one block to another                                                                     |
| 20   | debug - module                                                       | Display the output in the console                                                                                |
| 21   | ansible-playbook -i inventory playbook.yml -v                        | Shows the output in the console while it runs                                                                    |
| 22   | Variable scope : host, play and global(sent via extra)               |                                                                                                                  |
| 23   | Magic variables - hostvars\['web2'\].dns_server                      | using hostvars, we can call variables in other set                                                               |
| 24   | Magic variables - group_names                                        |                                                                                                                  |
| 25   | Magic variables - inventory_hostname                                 |                                                                                                                  |
| 26   | ansible_os_family                                                    | It has the OS of the host                                                                                        |
| 27   | loop: "{{ packages }}"                                               | Repeats the content of the packages                                                                              |
| 28   | ansible_facts\['os_family'\]                                         | System specific variables                                                                                        |
| 29   | ansible-playbook --syntax-check cratafl.yml                          | Verify the syntex                                                                                                |
| 30   | ansible-playbook --check cratafl.yml                                 | pre run                                                                                                          |
| 31   | web1 ansible_host=ip.. ansible_connection=ssh ansible_ssh_pass=P@sws | Entry at the Inventory file                                                                                      |
| 32   | vars: dns: 10.2 'nameserver {{ dns }}'                               | Define variables and calling it                                                                                  |
| 33   | ansible-playbook -v -b javainsta.yml                                 | \-b for become yes                                                                                               |
| 4    | ansible-playbook -vv -b mysql.yml                                    |                                                                                                                  |
| 5    |                                                                      |                                                                                                                  |
| 6    |                                                                      |                                                                                                                  |
| 7    |                                                                      |                                                                                                                  |
| 8    |                                                                      |                                                                                                                  |
| 9    |                                                                      |                                                                                                                  |
| 10   |                                                                      |                                                                                                                  |
| 11   |                                                                      |                                                                                                                  |
| 12   |                                                                      |                                                                                                                  |
| 13   |                                                                      |                                                                                                                  |
| 14   |                                                                      |                                                                                                                  |
| 15   |                                                                      |                                                                                                                  |
| 1    |                                                                      |                                                                                                                  |
| 2    |                                                                      |                                                                                                                  |
| 3    |                                                                      |                                                                                                                  |
| 4    |                                                                      |                                                                                                                  |
| 5    |                                                                      |                                                                                                                  |
| 6    |                                                                      |                                                                                                                  |
| 7    |                                                                      |                                                                                                                  |
| 8    |galaxy creates empty role|ansible-galaxy init testing|
| 9    |ansible-galaxy search elasticsearch|                                                                                                                  |
| 10   |ansible-galaxy install geerling|It download entire playbook and store it in the local|
| 11   |Install path|root .ansible roles folder or files|
| 12   |ansible-galaxy info user or rolename|                                                                                                                  |
| 13   |                                                                      |                                                                                                                  |
| 14   |                                                                      |                                                                                                                  |
| 15   |                                                                      |                                                                                                                  |
| 1    |                                                                      |                                                                                                                  |
| 2    |                                                                      |                                                                                                                  |
| 3    |                                                                      |                                                                                                                  |
| 4    |                                                                      |                                                                                                                  |
| 5    |                                                                      |                                                                                                                  |
| 6    |                                                                      |                                                                                                                  |
| 7    |                                                                      |                                                                                                                  |
| 8    |                                                                      |                                                                                                                  |
| 9    |                                                                      |                                                                                                                  |
| 10   |                                                                      |                                                                                                                  |
| 11   |                                                                      |                                                                                                                  |
| 12   |                                                                      |                                                                                                                  |
| 13   |                                                                      |                                                                                                                  |
| 14   |                                                                      |                                                                                                                  |
| 15   |                                                                      |                                                                                                                  |
| 1    |                                                                      |                                                                                                                  |
| 2    |                                                                      |                                                                                                                  |
| 3    |                                                                      |                                                                                                                  |
| 4    |                                                                      |                                                                                                                  |
| 5    |                                                                      |                                                                                                                  |
| 6    |                                                                      |                                                                                                                  |
| 7    |                                                                      |                                                                                                                  |
| 8    |                                                                      |                                                                                                                  |
| 9    |                                                                      |                                                                                                                  |
| 10   |                                                                      |                                                                                                                  |
| 11   |                                                                      |                                                                                                                  |
| 12   |                                                                      |                                                                                                                  |
| 13   |                                                                      |                                                                                                                  |
| 14   |                                                                      |                                                                                                                  |
| 15   |                                                                      |                                                                                                                  |

# Linux :

| S.No | Command    | Description                    |
| ---- | ---------- | ------------------------------ |
| 1    | diff -wsru | Diff between old and new files |
| 2    |            |                                |
| 3    |            |                                |
| 4    |            |                                |
| 5    |            |                                |
| 6    |            |                                |
| 7    |            |                                |
| 8    |            |                                |
| 9    |            |                                |
| 10   |            |                                |
| 11   |            |                                |
| 12   |            |                                |
| 13   |            |                                |
| 14   |            |                                |
| 15   |            |                                |

# httUrls and abbrevations

| S.No | Command                                                                                                      | Description                          |
| ---- | ------------------------------------------------------------------------------------------------------------ | ------------------------------------ |
| 1    | [kubectl get pods --all-namespaces](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet#tables) | Cheatsheet of md(markdown)           |
| 2    | https://radixweb.com/blog/installing-npm-and-nodejs-on-windows-and-mac                                       | npm, nodejs installations on windows |
| 3    | {{ }}                                                                                                        | Jinja2 templating                    |
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

# Docker

| S.No | Command                                                                                      | Description                                                                                              |
| ---- | -------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------- |
| 1    | /var/lib/docker                                                                              | Working dir                                                                                              |
| 2    | systemctl enable docker                                                                      |                                                                                                          |
| 3    | systemctl start docker                                                                       |                                                                                                          |
| 4    | systemctl stop docker                                                                        |                                                                                                          |
| 5    | docker version                                                                               |                                                                                                          |
| 6    | docker run -itd debian                                                                       |                                                                                                          |
| 7    | docker ps, docker ps -a                                                                      |                                                                                                          |
| 8    | docker stop \<container id>                                                                  |                                                                                                          |
| 9    | docker ps -a                                                                                 |                                                                                                          |
| 10   | docker run debian (will die)                                                                 |                                                                                                          |
| 11   | docker images                                                                                |                                                                                                          |
| 12   | docker inspect \<container id>                                                               |                                                                                                          |
| 13   | docker -help                                                                                 |                                                                                                          |
| 14   | docker pull nginx                                                                            |                                                                                                          |
| 15   | docker history nginx                                                                         |                                                                                                          |
| 16   | docker images --no-trunc                                                                     |                                                                                                          |
| 17   | docker tag nginx:latest nginx:myblog_stable                                                  |                                                                                                          |
| 18   | docker build -t mynginx .                                                                    | Build an image by using docker file                                                                      |
| 19   | docker rmi nginx:myblog                                                                      | Remove an image                                                                                          |
| 20   | docker rmi -f \<name of the image>                                                           |                                                                                                          |
| 7    | docker image prune                                                                           | delete images which does not have containers                                                             |
| 8    | docker system prune -a                                                                       |                                                                                                          |
| 9    | docker system df                                                                             |                                                                                                          |
| 10   | docker search jenkins                                                                        |                                                                                                          |
| 11   | docker search -- limit 5                                                                     |                                                                                                          |
| 12   | docker run -itd --name=web debian                                                            |                                                                                                          |
| 13   | docker ps -l                                                                                 | Shows latest container                                                                                   |
| 14   | docker stop, start                                                                           |                                                                                                          |
| 15   | docker rm \<container number>                                                                |                                                                                                          |
| 2    | docker run -itd --restart=always --name=web debian                                           | To restart automatically when it is stop,Restart policy will be configured. When the system got rebooted |
| 3    | docker kill \<container id>                                                                  | Forcibly stop a container                                                                                |
| 4    | docker run -rm hello-world                                                                   | Automatically delete the docker once it stops                                                            |
| 5    | docker logs -t \<cont id>                                                                    |                                                                                                          |
| 6    | docker logs -tf \<cont id>                                                                   |                                                                                                          |
| 7    | docker run --name ournginx -d -p 8080:80 nginx                                               | export the port of 80 container to outside 8080                                                          |
| 8    | curl http://localhost:8080                                                                   |                                                                                                          |
| 9    | docker run -p 8080:80 --name web_nginx2 -v ${PWD}/webpages:/usr/share/nginx/html:ro -d nginx | dash v is for the volume                                                                                 |
| 10   |                                                                                              |                                                                                                          |
| 11   |                                                                                              |                                                                                                          |
| 12   |                                                                                              |                                                                                                          |
| 13   |                                                                                              |                                                                                                          |
| 14   |                                                                                              |                                                                                                          |
| 15   |                                                                                              |                                                                                                          |
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

# npm

| S.No | Command       | Description |
| ---- | ------------- | ----------- |
| 1    | npm           |             |
| 2    | npm ci        |             |
| 3    | npm run lint  |             |
| 4    | npm run build |             |
| 5    |               |             |
| 6    |               |             |
| 7    |               |             |
| 8    |               |             |
| 9    |               |             |
| 10   |               |             |
| 11   |               |             |
| 12   |               |             |
| 13   |               |             |
| 14   |               |             |
| 15   |               |             |

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

# Kubernets commands

runheof 808080is for thvolumeansibl/ynt
