INSTALLDIR=.\Pack\zjsdrv\

COPYDLL:
        if not exist $(INSTALLDIR)\$(_BUILDARCH) (md $(INSTALLDIR)\$(_BUILDARCH) )
        if exist $(OBJ_PATH)\$(O)\$(TARGETNAME).dll copy $(OBJ_PATH)\$(O)\$(TARGETNAME).dll $(INSTALLDIR)\$(_BUILDARCH)
#        if exist $(OBJ_PATH)\$(O)\$(TARGETNAME).dll copy $(OBJ_PATH)\$(O)\$(TARGETNAME).dll $(INSTALLDIR)\i386\
