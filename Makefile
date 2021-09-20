.PHONY: all
all: build run

.PHONY: build
build: Dockerfile
	docker build -t ergodox_ez .

.PHONY: run
run: build
	docker run --mount "type=bind,source=$(PWD)/output,target=/output" --rm -it ergodox_ez

.PHONY: debug
debug:
	docker run --mount "type=bind,source=$(PWD)/output,target=/output" --rm -it ergodox_ez bash -i
