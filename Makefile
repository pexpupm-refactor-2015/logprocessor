SUBDIRS=$(wildcard Log*/)

all:
	@for dir in $(SUBDIRS); do \
        $(MAKE) -C $$dir; \
	done

clean: $(SUBDIRS)
	@for dir in $(SUBDIRS); do \
        $(MAKE) clean -C $$dir; \
	done	
