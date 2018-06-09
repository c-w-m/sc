!include <.\Makefile.config>

SUBDIRS = \
	..\..\..\examples\tlm\at_1_phase \
	..\..\..\examples\tlm\at_2_phase \
	..\..\..\examples\tlm\at_4_phase \
	..\..\..\examples\tlm\at_extension_optional \
	..\..\..\examples\tlm\at_mixed_targets \
	..\..\..\examples\tlm\at_ooo \
	..\..\..\examples\tlm\lt \
	..\..\..\examples\tlm\lt_dmi \
	..\..\..\examples\tlm\lt_extension_mandatory \
	..\..\..\examples\tlm\lt_mixed_endian \
	..\..\..\examples\tlm\lt_temporal_decouple

TARGETS = build run check clean

# default target
all: build

# see
#  - Makefile.rules  for actual implementation
#  - Makefile.config for available configuration options
$(TARGETS):
	@for %%i in ($(SUBDIRS)) do \
	  @( chdir $(MAKEDIR)\%%i\build-msvc && \
	    $(MAKE) /nologo FLAG_BATCH=1 \
	      CONFIG=$(CONFIG) PLATFORM=$(PLATFORM) $@ )
