#

CFLAGS+=	-DCRT_IRELOC_RELA \
		-DINIT_IRELOCS="init_cheri_features(env)"
