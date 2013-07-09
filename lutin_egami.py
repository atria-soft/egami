#!/usr/bin/python
import lutinModule
import lutinTools

def Create(target):
	# module name is 'edn' and type binary.
	myModule = lutinModule.module(__file__, 'egami', 'LIBRARY')
	
	# add the file to compile:
	myModule.AddSrcFile([
		'egami/Image.cpp',
		'egami/egami.cpp',
		'egami/debug.cpp',
		'egami/wrapperPNG.cpp',
		'egami/wrapperSVG.cpp',
		'egami/wrapperBMP.cpp'])
	
	# name of the dependency
	myModule.AddModuleDepend(['etk', 'png', 'esvg'])
	
	myModule.CompileFlags_CC([
		'-Wno-write-strings',
		'-Wall'])
	
	myModule.AddExportPath(lutinTools.GetCurrentPath(__file__))
	
	
	# add the currrent module at the 
	return myModule


