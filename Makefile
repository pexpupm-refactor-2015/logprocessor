SUBDIRS=$(wildcard LogProcessor/)

all: $(SUBDIRS)
	@echo "SUBDIRS:$(SUBDIRS)"
	make -C $<

clean: $(SUBDIRS)
	@echo "SUBDIRS:$(SUBDIRS)"
	make clean -C $<
	rm -rf *~
