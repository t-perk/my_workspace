Command to compile this file with bazel
bazel build -c opt --define MEDIAPIPE_DISABLE_GPU=1 -s hello_world


GLOG_logtostderr=1 bazel-bin/hello_world
