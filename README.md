# cpp-playground

This is my C++ playsground. I'm mostly using CLion as IDE but also Helix.
Most of the projects can be built by going to the build folder and executing:

```
cmake ..
make
```

# Drogon playground

There will be some projects for Drogon Web server.

## Install Drogon on Mac M1 (arm native)

These is my install guide for Mac M1 running on Arm native processor (Homebrew).

1. It requires Xcode installed
2. Install Drogon dependencies: *brew upgrade ; brew install jsoncpp ossp-uuid zlib-devel openssl*
3. Install Drogon database dependencies (PostgreSQL and Redis): **brew install postgresql@14 hiredis**
4. Add variables to support the build process. In my case they were added to `~/.zshrc`:

```
export OPENSSL_CRYPTO_LIBRARY="/opt/homebrew/opt/openssl"
export OPENSSL_INCLUDE_DIR="/opt/homebrew/opt/openssl/include"
export OPENSSL_ROOT_DIR="/opt/homebrew/opt/openssl"
export OPENSSL_LIBRARIES="/opt/homebrew/opt/openssl/lib"
```

5. Install Drogon as recommended on the official documentation (at 2023-06-05), but for the CMAKE we are providing the paths explicitly.
Please, review and adjust baed on your OpenSSL path. For the installation it will request the root password:

```
cd $WORK_PATH
git clone https://github.com/drogonframework/drogon
cd drogon
git submodule update --init
mkdir build
cd build
cmake -DOPENSSL_ROOT_DIR=$OPENSSL_ROOT_DIR -DOPENSSL_LIBRARIES=$OPENSSL_LIBRARIES ..
make && sudo make install
```

6. At this point the `drogon_ctl` or `dg_ctl` should be available on the shell. It's installed on `/usr/local/bin`. If you can find, you might need to add the directory to your `PATH` env variable.

