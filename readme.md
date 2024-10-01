### 1.接着java项目继续操作，将.h文件放入jni目录中
### 2.在CMakeLists.txt文件中添加jni.h所在的目录，参考文件
### 3.包含目录，将jni.h jni_md.h包含进来
### 4.add_library将cpp代码以及h头文件添加到类库，生成dll文件，复制到java项目中