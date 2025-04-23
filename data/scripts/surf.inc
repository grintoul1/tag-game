EventScript_UseSurf::
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	lockall
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end
