EventScript_UseSurf::
	goto_if_unset FLAG_BADGE05_GET, EventScript_EndUseSurf
	setfieldeffectargument 0, VAR_RESULT
	lockall
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end
