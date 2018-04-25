all:
	cd build \
		&& cmake .. \
		&& make -j$(shell nproc)

debug:
	mkdir -p build/Debug
	cd build/Debug \
		&& cmake -DCMAKE_BUILD_TYPE=Debug ../.. \
		&& make -j$(shell nproc)
	ln -svf $(shell pwd)/bin/Debug/HGEnzine $(shell pwd)/bin/HGEnzine

release:
	mkdir -p build/Release
	cd build/Release \
		&& cmake -DCMAKE_BUILD_TYPE=Release ../.. \
		&& make -j$(shell nproc)
	ln -svf $(shell pwd)/bin/Release/HGEnzine $(shell pwd)/bin/HGEnzine

run:
	./bin/HGEnzine

clean:
	cd build \
		&& git clean -Xdf .

rm:
	rm -rf ./bin

