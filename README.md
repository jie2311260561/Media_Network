# Media_Network

#### 介绍
在全志D1上使用网络传输视频码流，在电脑上抓取并显示。  

整个项目使用 cmake 构建，预计会使用网络库和哪吒中的硬件接口。将所有使用到的动态库均进行打包，

#### 软件架构
软件架构说明

| 模块 | 命名 |
| --- | --- |
|    视频编码模块  |     media_decode  |
|    视频码流传输模块   |   media_transfer |  
|    业务代码板块     |  app_develop  |
 

#### 安装教程

1.  
2.  xxxx
3.  xxxx

#### 使用说明

1.  分为业务端和服务端，均为同一套代码，使用不同的编译链构建
2.  Windows编译环境采用 mingw-64 构建
3.  Allwinner D1 编译链 使用 AllwinnerSDK  
4.  

#### 参与贡献

1.  Fork 本仓库
2.  切换到 develop 开发分支
3.  开发你想开发的 modeule 请注意文件命名格式
4.  提交代码到 develop 分支
5.  新建 Pull Request
6.  master 分支合并测试无误的 develop 分支(定期)


