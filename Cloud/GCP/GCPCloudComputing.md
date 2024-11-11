js

Youtube : Andrew - https://www.youtube.com/watch?v=jpno8FSqpc8&t=3674s

https://app.exampro.co/

# Cloud computing

## What Is Cloud Computing?

**Cloud Computing**

The delivery of a shared pool of on-demand computing services over the public internet, that can be rapidly provisioned and released with minimal management effort or service provider interaction.

**The 5 Characteristics of Cloud**

1. On-demand Self Service - Provision resources automatically without requiring human interaction
2. Broad Network Access - Available over the network
3. Resource Pooling - Pooled resources to support a multi-tenant model allowing multiple customers to share the same applications or the same physical infrastructure
4. Rapid Elasticity - Rapidly provision and de-provision any of the cloud computing resources
5. Measured Service - Resource usage can be monitored, controlled and reported using metering capabilities

**Benefits of Cloud**

Agility - Flexibility for provisioning resources, Innovate faster

Cost - Pay as you go, Trade capital expenditure for variable expense

Speed - Resources on demand, Scriptable infrastructure

Global - Global data centres, Disaster recovery becomes easier, High availability

Security - Always up-to-date, Physical security, Encryption at rest and in transit, Compliance

## Characteristics

a. Ondemand self service - automatic creation(minimal efforts)

b. Broad NW access - avaialble on NW

c. Resource pooling  -  Multiple customers can / should share resources with a secuirty.

Ex : ppl living in an apartment but security will be there for their home

d. Rapic elasticity

e. Measured service  (monitoirng and alerting)

## Cloud deployment models

public (1 public cloud), private (on-prem cloud)), multi-cloud (2 or more public cloud),

hybrid cloud - (private cloud+public clud)

Hybrid cloud and Hybrid environments are both different.

## Cloud Service Models (XaaS)

IaaS: IaaS businesses offer services such as pay-as-you-go storage,
networking, and virtualization. IaaS gives users cloud-based
alternatives to on-premise infrastructure, so businesses can avoid
investing in expensive on-site resources.

PaaS: A PaaS vendor provides hardware and software tools over the
internet, and people use these tools to develop applications. PaaS users
 tend to be developers.

SaaS: SaaS platforms make software available to users over the internet, usually for a monthly subscription fee.

On-premise: software that’s installed in the same building as your business.

![1730737187023](image/CloudComputing/1730737187023.png)

## Google Cloud Global Infrastructure

**Geography and Regions**

**Zone**

* A zone is a deployment area for Google Cloud resources within a region.
* The smallest entity in Google’s global network.
* A single failure domain within a region
* Deploy closer to users for optimal latency

**Region**

* Regions are independent geographic areas that are sub-divided into zones
* For fault tolerance and high availability
* Intercommunication <5ms between zones within a region

**Multi-Region**

* Multi-Regions are large geographic areas, that contain two or more regions
* Allows Google services to maximize redundancy and distribution within and across regions
* High availability (geo-redundant)

## Compute Service Options

IaaS - VM Instances

CaaS - GKE - Kubernetes Engine (Container as a service)

PaaS -  App engine

FaaS - Cloud functions, Function as a servie

FaaS - Serverless for Containers -- Cloud Run - Fully managed compute platform for containerized apps. Built ok Knative

**Compute Engine**

* Virtual Machines (VMs) called instances, Choose region and zone to
  deploy , You decide the operating system and the software you decide to
  put on it
* Use public or private images to create instances
* Pre-configured images and software packages available in Google Cloud Marketplace
* Manage multiple instances using instance groups
* Add/remove capacity using autoscaling with instance groups
* Attach/detach disks as needed
* Can be used with Google Cloud Storage
* Use SSH to connect directly
* Considered to be IaaS

**Google Kubernetes Engine (GKE)**

* Container-orchestration system for automating deploying, scaling, and managing containers
* Built on open-source Kubernetes
* Flexibility to integrate with on-premise Kubernetes
* Uses Compute Engine instances as nodes in a cluster.
* A cluster is a group of nodes or Compute Engine instances
* Considered Container as a Service (CaaS)

**App Engine**

* Fully managed, serverless platform for developing and hosting web applications at scale (PaaS)
* Provisions servers and scales your app instances based on demand
* Build your app in Go, Java, .NET, Node.js, PHP, Python, or Ruby
* Connect with other Google services seamlessly
* Integrates with Web Security Scanner to identify threats

**Cloud Functions**

* Serverless execution environment for building and connecting cloud services
* Simple, single-purpose functions that are attached to events
* Triggered when an event being watched is fired
* Your code executes in a fully managed environment
* No need to provision any infrastructure
* Cloud Functions can be written using JavaScript, Python 3, Go, or Java runtimes

**Cloud Run**

* Fully managed compute platform for deploying and scaling containerized applications quickly and securely
* Built upon an open standard Knative
* Abstracts away all infrastructure management
* Known as serverless for containers
* Any language, any library, any binary
* Considered Function as a service(FaaS)# Cloud fundamentalsStorage and Database Options

**Cloud Storage**

* Consistent, scalable, large-capacity, highly durable object storage
* 11 9’s Durability (99.999999999%)
* Unlimited storage with no minimum object size
* Use Cloud Storage for content delivery, data lakes, and backup
* Available in different storage classes and availability

**Storage Classes**

**Standard**

* Maximum availability and no limitations

**Nearline**

* Low-cost archival storage
* Accessed <1/month

**Coldline**

* Even lower-cost archival storage
* Accessed <1/quarter

**Archive**

* Lowest-cost archival storage
* Accessed <1/year

**Availability**

**Region**

* Single Region

**Dual-region**

* Pair of regions

**Multi-region**

* Large geographic area

**Filestore**

* Fully managed NFS file server
* NFSv3 compliant
* Store data from running applications
* Use with VM instances and Kubernetes clusters

**Persistent Disks**

* Durable block storage for instances
* Standard – Regular standard storage at a reasonable price
* Solid State (SSD) - Lower latency/higher IOPS

Both options are available in zonal and regional options

### Relational

#### Cloud SQL

* Fully managed database service
* PostgreSQL, MySQL, and SQL Server
* High availability across zones

#### Cloud Spanner

* Scalable relational database service
* Support transactions, strong consistency and synchronous replication
* High availability across regions and globally

#### Bare Metal Solution for Oracle (NEW)

* Lift and shift Oracle workloads to Google Cloud

### Key-value

No-SQL - Bigtable, Datastore, Firestore and Memorystore

#### Cloud Bigtable

* Fully managed, scalable NoSQL database
* High throughput with low latency
* Cluster resizing without downtime

#### BigQuery (NEW)

* Serverless, highly scalable, cost-effective multicloud data warehouse
* designed for business agility
* 99.99% availability

**Datastore**

* Fast, fully managed, serverless, NoSQL document database
* For mobile, web and IoT apps
* Multi-region replication and ACID transactions

### Document

#### Firestore

* NoSQL, realtime database
* Optimized for offline use
* Cluster resizing without downtime

#### Firebase Realtime Database (NEW)

* Store and sync data in real time

### In-memory

#### Memorystore

* Highly available in-memory service for Redis and Memcached
* Fully Managed

# Networking Services

**Virtual Private Cloud (VPC)**

* Virtualized network within Google Cloud
* Core networking service
* Global resource
* Each VPC contains a default network
* Additional networks can be created in your project, but networks cannot be shared between projects.

**Firewall Rules**

* Govern traffic coming into instances on a network
* The Default network has a default set of firewall rules
* Custom rules can be created

**Routes**

* Advanced networking functions for your instances
* Specifies how packets leaving an instance should be directed

**Load Balancing**

* Distributing Workloads across multiple instances

**HTTP(S) Load Balancing**

* Distribute traffic across regions to ensure that requests are routed to the closest region or, in the event of a failure or over-capacity, to a healthy instance in the next closest region.
* Distribute traffic based on the content type

**Network Load Balancing**

* Distribute traffic among server instances in the same region based on incoming IP protocol data, such as an address, port, and protocol

**Google Cloud DNS**

* Publish and maintain DNS records by using the same infrastructure that Google uses.
* Work with managed zones and DNS records through the CLI, API, or SDK

**Cloud VPN**

* Connect your existing network to your VPC through an IPsec connection.

**Direct Interconnect**

* Connect an existing network to your VPC using a highly available, low-latency, enterprise-grade connection.

**Direct Peering**

* Exchange internet traffic between your business network and Google at one of Google's broad-reaching edge network locations

**Carrier Peering**

* Connect your infrastructure to Google's network edge through highly available, lower-latency connections by using service providers

# Resource Hierarchy

![1730836760935](image/CloudComputing/1730836760935.png)

**Service-level resources**

* Compute Instance VM’s
* Cloud Storage buckets
* Cloud SQL databases

**Account-level resources**

* Organization
* Folders
* Projects

**Resource Hierarchy**

* Configure and grant access to the various resources
* Resource Hierarchy Structure
* Resources are organized hierarchically using a parent/child relationship
* Designed to map organizational structure to Google Cloud
* Better management of permissions and access control
* Policies controlled by IAM
* Access control policies and configuration settings on a parent resource are inherited by the child
* Each child object has exactly one parent.

**Domain (cloud level)**

**Organization (root node)**

**Folders**

* Grouping mechanism and isolation boundary

**Projects**

* Core organizational component

**Resources**

* Any service-level resource

**Labels**

* Categorize resources

# Controlling Costs and Budget Alerts

![1730949475316](image/CloudComputing/1730949475316.png)

**Committed Use Discounts (CUD’s)**

* Discounted prices when you commit to using a minimum level of resource for a specified term
* 1- or 3-year Commitment

**Commitment Types** - The commitment fee is billed monthly

**Spend-based commitment**

* Discount for a commitment to spend a minimum amount for a service (hours) in a particular region
* 25% discount for 1 year – 52% discount on a 3 year
* Available for Cloud SQL database instances and Google Cloud VMWare Engine
* Applies only to CPU and memory usage

**Resource-based commitment**

* Discount for commitment to spend a minimum amount for Compute Engine resource in a particular region.
* Available for vCPU, Memory, GPU and Local SSD
* 57% discount for most resources
* 70% for memory-optimized machine types
* For use across Projects

**Sustained-use discounts**

* Automatic discounts of running Compute Engine resources a significant portion of the billing month
* Applies to VCPUs and memory for most Compute Engine instance types
* Includes VM’s created by GKE
* Does not apply to App Engine flexible, Dataflow and E2 machine types

**GCP Pricing Calculator** – Quick estimate of what your usage will cost on Google Cloud

**Cloud Billing Budgets**

* Enables you to track your actual Google Cloud spend against your planned spend
* Budget alert threshold rules that are used to trigger email notifications to help you stay informed about your spending

# Cloud SDK and CLI

![1731100065274](image/CloudComputing/1731100065274.png)

**Cloud SDK**

Set of command line tools that allow you to manage resources through the terminal

* gcloud
* gsutil
* bq
* Kubectl

A user account is a Google account that allows end-users to authenticate directly to your application. For most common use cases on a single machine, using a user account is best practice.

A service account is a Google account associated with your GCP project and not a specific user. A service account can be used by providing a service account key to your application and is recommended to script Cloud SDK tools for use on multiple machines.

**Gcloud Init** - Authorizes access and performs other common Cloud SDK setup steps.

**gcloud auth login** - Authorize access for gcloud with Google user credentials

**Gcloud config** - Allows you to configure accounts and projects

**gcloud components** - Allow you to install, update and delete the components of the sdk

# IAM - Identity and access mgmt

## Cloud IAM

![1731192149148](image/CloudComputing/1731192149148.png)

![1731190735919](image/CloudComputing/1731190735919.png)

![1731190832999](image/CloudComputing/1731190832999.png)

**Identity and Access Management (IAM)**

You manage access control by defining who (identity) has what access (role) for which resource. This also includes organizations, folders, and projects.

A **policy** is a collection of bindings, audit configuration, and metadata.

A **binding** specifies how access should be granted on resources. It binds one or more members with a single role and any context-specific conditions that change how and when the role is granted.

The **metadata** includes additional information about the policy, such as an etag and version to facilitate policy management.

The **AuditConfig** field specifies the configuration data for how access attempts should be audited.

**Google Account** - Any email address that's associated with a Google Account, including gmail.com or other domains.

**Service Account** - An account for an application instead of an individual end user.

**Google Groups** - A named collection of Google Accounts and service accounts

**G Suite Domain** - Google Accounts that have been created in an organization's G Suite account

**Cloud Identity Domain** - Google Accounts in an organization that are not tied to any G Suite applications or features

**AllAuthenticatedUsers** - A special identifier that represents all service accounts and all users on the internet who have authenticated with a Google Account

**AllUsers** - A special identifier that represents anyone who is on the internet, including authenticated and unauthenticated users

**Roles**

* This is a named collection of permissions that grant access to perform actions on Google Cloud resources.
* You cannot grant a permission to the user directly
* You grant a role to a user and all the permissions that the role contains.

**Permissions**

* Determines what operations are allowed on a resource
* Correspond one-to-one with REST API methods
* Not granted to users directly
* E.g., compute.instances.list

**Primitive** - Roles historically available in the Google Cloud

* Owner
* Editor
* Viewer
* Avoid using these roles if possible

**Predefined** - Finer-grained access control than the primitive roles

**Custom** - Tailor permissions to the needs of your organization

**Conditions**

* Used to define and enforce conditional, attribute-based access control for Google Cloud resources.
* Conditions allow you to choose granting resource access to identities only if configured conditions are met
* When a condition exists, the access request is only granted if the condition expression = true

**Metadata**

* To help prevent a race condition when updating the policy, IAM supports concurrency control through the use of an etag field in the policy

**Audit Config**

* Determines which permission types are logged, and what identities, if any, are exempted from logging

## Policies and Conditions

![1731192425002](image/CloudComputing/1731192425002.png)

**Policy Limitations**

* 1 policy per resource (including organizations, folders, projects)
* 1500 members or 250 Google groups per policy
* Up to 7 minutes for policy changes to fully propagate across GCP
* Limit of 100 conditional role bindings per policy

Conditions - Condition attributes are either based on resource or based on details about the request (timestamp, originating/destination IP address)

**Condition Limitations**

* Limited to specific services
* Primitive roles are unsupported
* Members cannot be allUsers or allAuthenticatedUsers
* Limit of 100 conditional role bindings per policy
* 20 role bindings for same role and same member

**AuditConfig Logs**

Specifies the audit configuration for a service. The configuration determines which permission types are logged, and what identities, if any, are exempted from logging. An AuditConfig must have one or more AuditLogConfigs.

## Service Accounts

![1731327214936](image/GCPCloudComputing/1731327214936.png)

![1731327660296](image/GCPCloudComputing/1731327660296.png)

![1731327787030](image/GCPCloudComputing/1731327787030.png)

![1731328002595](image/GCPCloudComputing/1731328002595.png)

![1731328071126](image/GCPCloudComputing/1731328071126.png)

A service account is a special kind of account used by an application or a virtual machine (VM) instance, not a person.

An application uses the service account to authenticate between the application and GCP services so that the users aren't directly involved

A special type of Google account intended to represent a non-human user that needs to authenticate and be authorized to access data in Google APIs.

**Service Account types**

* User-managed, User created, You choose the name
  service-account-name@project-id.iam.gserviceaccount.com

**Default**

* ~Using some GCP services create user-managed service accounts~
* ~Automatically granted the Editor role for the project~
* When using certain GCP services, default service accounts are automatically created. These are user-managed service accounts.
* These default service accounts are automatically granted the **Editor** role for the project
  project-id@appspot.gserviceaccount.com
  project-number-compute@developer.gservcieaccount.com

**Google-managed**

* Managed by Google, and they are used by Google services
* Some are visible, some hidden
* Name ends with "Service Agent" or "Service Account”

**Service Account Keys**

**Key Management** – None, All handled by Google

**User managed**

**Key Management** - Key storage, Key distribution, Key revocation, Key rotation, Protecting the keys from unauthorized users, Key recovery

**Access scopes**

* Service Account scopes are the legacy method of specifying permissions for your instance
* And they are used in substitution of IAM roles
* These are used specifically for default
* Or automatically created service accounts
* Based on enabled API's

## Cloud Identity

![1731343652938](image/GCPCloudComputing/1731343652938.png)

**loud Identity** is an Identity as a Service (IDaaS) solution that centrally manages users and groups. This would be the sole system for authentication and that provides a single sign-on experience for all employees of an organization to be used for all your internal and external applications.

**Device management** - lets people in any organization access their work accounts from mobile devices while keeping the organization's data more secure.

**Security** - Helps by applying security best practices along with being able to deploy 2SV for the whole company along with enforcement controls and can also manage passwords to make sure they are meeting the enforced password requirements automatically.

**Single Sign-on** - With single sign-on (SSO), users can access many applications without having to enter their username and password for each application

**Reporting** - This covers audit logs for logins, groups, devices and even tokens. You are even able to export these logs to BigQuery for analysis. You can then create reports from these logs that cover security, applications and activity.

**Directory Management** - Provides profile information for users in your organization, email and group addresses, and shared external contacts in the Directory. Using Google Cloud Directory Sync (GCDS), you can synchronize the data in your Google Account with your Microsoft Active Directory or LDAP server. GCDS doesn't migrate any content (such as email messages, calendar events, or files) to your Google Account. You use GCDS to synchronize all your users, groups, and shared contacts to match the information in your LDAP server.

**Google Cloud Directory Sync** is a free Google-provided tool that implements the synchronization process and can be run either on Google Cloud or in your on-premises environment. Synchronization is one-way so that Active Directory remains the source of truth.

## Cloud IAM Best Practices

![1731344796546](image/GCPCloudComputing/1731344796546.png)

![1731345021497](image/GCPCloudComputing/1731345021497.png)

![1731346849961](image/GCPCloudComputing/1731346849961.png)

![1731346923206](image/GCPCloudComputing/1731346923206.png)

**Policy Management**

* To grant access to all projects in your Organization, use an organization-level policy
* Grant roles to a Google group instead of individual users where possible
* When granting multiple roles to a particular task, create a Google group instead

# Networking services

## Networking Refresher PART 1

 **Correction** : ~3:30 Timestamp. IPv6 (Internet Protocol version 6) was **not** designed in 2017. It was actually developed in the mid-1990s to address IPv4 address exhaustion. The initial specification of IPv6 was published in 1998 as RFC 2460.

![1731355351734](image/GCPCloudComputing/1731355351734.png)

![1731355672202](image/GCPCloudComputing/1731355672202.png)

![1731355784582](image/GCPCloudComputing/1731355784582.png)

![1731355948924](image/GCPCloudComputing/1731355948924.png)

![1731355985418](image/GCPCloudComputing/1731355985418.png)

![1731356032898](image/GCPCloudComputing/1731356032898.png)


![1731356050666](image/GCPCloudComputing/1731356050666.png)


![1731356122254](image/GCPCloudComputing/1731356122254.png)



![1731356497308](image/GCPCloudComputing/1731356497308.png)


![1731356680564](image/GCPCloudComputing/1731356680564.png)



![1731356812725](image/GCPCloudComputing/1731356812725.png)


![1731356883600](image/GCPCloudComputing/1731356883600.png)

![1731357005784](image/GCPCloudComputing/1731357005784.png)

## VPC-Virtual Private Cloud


![1731361066494](image/GCPCloudComputing/1731361066494.png)


![1731361271403](image/GCPCloudComputing/1731361271403.png)


![1731361357460](image/GCPCloudComputing/1731361357460.png)

![1731361386578](image/GCPCloudComputing/1731361386578.png)
