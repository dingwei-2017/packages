# E-Commerce Micro-Service Solution Based on ARM64 Server 

* [Introduction](#1)
* [Software Architecture ](#2)
* [Installation](#3)
* [Start](#4)
* [Remove](#5)

## <a name="1">Introduction</a>

It is to demonstrate one e-commerce microservice solution with high performance、high scalability、high availability and high reliability based on ARM64 servers. 

In addition, it uses many middlewares provided by Spring Cloud such as:
  * `Eureka`: MicroService Service Discovery
  * `Zuul`: MicroService Api-Gateway
  * `Hystrix, Feign, Ribbon, Zipkin, ...`

## <a name="2">Software Architecture</a>

<center><a href="docs/estuary_e_commerce_micro_service_software_architecture.png"><img src="https://github.com/open-estuary/packages/blob/master/solutions/e-commerce-springcloud-microservices/docs/estuary_e_commerce_micro_service_software_architecture.png" border=0 width=1200></a></center>

## <a name="3">Installation</a>
* $ mvn clean package
* $ mvn clean install

## <a name="4">Start</a>
$ mvn spring-boot:run

## <a name="5">Remove</a>


