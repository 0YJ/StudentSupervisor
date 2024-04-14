# 学生管理系统

### 这是一个简单的学生管理系统，使用C++进行基础的CRUD（创建、读取、更新、删除）操作。该系统可以添加、删除、修改和查询学生信息。
功能
```bash
    添加学生：输入学生ID、姓名和年龄，将学生信息添加到系统中。
    删除学生：通过学生ID删除学生信息。
    修改学生信息：通过学生ID修改其姓名和年龄。
    查询学生信息：通过学生ID查询其详细信息。
```
## 开始
### 结构如下
```bash
StudentManagementSystem/
|-- bin/                    # 可执行文件存放目录
|-- include/                # 头文件存放目录
|   |-- student.h           # 学生类的定义
|-- src/                    # 源代码文件存放目录
|   |-- student.cpp         # 学生类的实现
|   |-- main.cpp            # 程序入口和界面逻辑
|-- Makefile                # 用于编译项目的Makefile

```
### 以下指南将帮助您在本地机器上安装和运行此项目，用于开发和测试目的。
#### 先决条件

### 确保您的计算机上已安装以下软件：
```bash
    GCC/G++ 编译器
    Make
```
### 安装
#### 克隆仓库到本地机器：
```bash
git clone https://github.com/yourusername/StudentManagementSystem.git
cd StudentManagementSystem
```
#### 编译项目：

```bash
g++ -o app main.cpp student.cpp -lsqlite3

make
```
#### 运行程序：

```bash
./bin/app
```
### 使用说明

#### 该程序将通过命令行界面接受输入，您可以根据提示进行学生信息的添加、修改和查询。
#### 示例

##### 添加学生：

```bash

Add Student: Enter ID, Name, Age
```
##### 查询学生：

```bash

    Query Student: Enter ID
```

### 贡献

欢迎贡献！请遵循以下步骤进行贡献：
```bash
    Fork 仓库
    创建您的功能分支 (git checkout -b feature/fooBar)
    提交您的更改 (git commit -am 'Add some fooBar')
    推送到分支 (git push origin feature/fooBar)
    创建新的Pull Request
```
### 许可证

该项目遵循MIT许可证。有关更多信息，请查看 LICENSE 文件。
