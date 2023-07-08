MAKE = make

run :
	$(MAKE) --directory=book build
	$(MAKE) --directory=book run

build :
	$(MAKE) --directory=book build

clean :
	$(MAKE) --directory=book clean