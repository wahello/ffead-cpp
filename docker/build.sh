docker rmi -f sumeetchhetri/ffead-cpp-rust-base:6.0
docker build --progress plain -f ffead-cpp-rust-base.dockerfile -t sumeetchhetri/ffead-cpp-rust-base:6.0 .
docker push sumeetchhetri/ffead-cpp-rust-base:6.0

docker rmi -f sumeetchhetri/ffead-cpp-v-base:6.0
docker build --progress plain -f ffead-cpp-v-base.dockerfile -t sumeetchhetri/ffead-cpp-v-base:6.0 .
docker push sumeetchhetri/ffead-cpp-v-base:6.0

docker rmi -f sumeetchhetri/ffead-cpp-sql-raw-profiled-base:6.0
docker build --progress plain -f ffead-cpp-sql-raw-profiled-base.dockerfile -t sumeetchhetri/ffead-cpp-sql-raw-profiled-base:6.0 .
docker push sumeetchhetri/ffead-cpp-sql-raw-profiled-base:6.0

docker rmi -f sumeetchhetri/ffead-cpp-v-picov-raw-profiled-base:6.0
docker build --progress plain -f ffead-cpp-v-picov-raw-profiled-base.dockerfile -t sumeetchhetri/ffead-cpp-v-picov-raw-profiled-base:6.0 .
docker push sumeetchhetri/ffead-cpp-v-picov-raw-profiled-base:6.0

docker rmi -f sumeetchhetri/ffead-cpp-sql-raw-clibpqb-profiled-base:6.0
docker build --progress plain -f ffead-cpp-sql-raw-clibpqb-profiled-base.dockerfile -t sumeetchhetri/ffead-cpp-sql-raw-clibpqb-profiled-base:6.0 .
docker push sumeetchhetri/ffead-cpp-sql-raw-clibpqb-profiled-base:6.0

docker rmi -f sumeetchhetri/ffead-cpp-v-picov-raw-clibpqb-profiled-base:6.0
docker build --progress plain -f ffead-cpp-v-picov-raw-clibpqb-profiled-base.dockerfile -t sumeetchhetri/ffead-cpp-v-picov-raw-clibpqb-profiled-base:6.0 .
docker push sumeetchhetri/ffead-cpp-v-picov-raw-clibpqb-profiled-base:6.0

docker rmi -f sumeetchhetri/ffead-cpp-sql-raw-async-profiled-base:6.0
docker build --progress plain -f ffead-cpp-sql-raw-async-profiled-base.dockerfile -t sumeetchhetri/ffead-cpp-sql-raw-async-profiled-base:6.0 .
docker push sumeetchhetri/ffead-cpp-sql-raw-async-profiled-base:6.0

docker rmi -f sumeetchhetri/ffead-cpp-sql-raw-async-clibpqb-profiled-base:6.0
docker build --progress plain -f ffead-cpp-sql-raw-async-clibpqb-profiled-base.dockerfile -t sumeetchhetri/ffead-cpp-sql-raw-async-clibpqb-profiled-base:6.0 .
docker push sumeetchhetri/ffead-cpp-sql-raw-async-clibpqb-profiled-base:6.0