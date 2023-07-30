FROM ubuntu:22.04

# Install dependencies

RUN apt update && apt install -y \
  build-essential \
  curl \
  git \
  unzip \
  wget

# Install Bazel
RUN BAZEL_VERSION=6.3.0 && \
    BAZEL_ARCH=$(arch | sed s/aarch64/arm64/) && \
    wget -O /bin/bazel https://github.com/bazelbuild/bazel/releases/download/${BAZEL_VERSION}/bazel-${BAZEL_VERSION}-linux-${BAZEL_ARCH}
RUN chmod +x /bin/bazel

# Install Buildifier
RUN BUILDIFIER_VERSION=v6.1.2 && \
    BUILDIFIER_ARCH=$(arch | sed s/aarch64/arm64/ | sed s/x86_64/amd64/) && \
    wget -O /bin/buildifier https://github.com/bazelbuild/buildtools/releases/download/${BUILDIFIER_VERSION}/buildifier-linux-${BUILDIFIER_ARCH} && \
    chmod +x /bin/buildifier

# Check versions
RUN bazel version
RUN buildifier --version
