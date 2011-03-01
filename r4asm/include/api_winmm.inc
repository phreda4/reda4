 ;=============================================================================;
 ; ��� ��������� � ��������� ����� ���������� �� ������:   vertexland@narod.ru ;
 ; ��������� ��� �� ������ ������� ������ ������:          vertexland.narod.ru ;
 ;                                                                             ;
 ;                            Created (c) 2004-2005. keYMax (��������� ������) ;
 ;=============================================================================;

 ; Windows Multi Media api calls (ASCII)

   import  winmm,	CloseDriver,			'CloseDriver',			   \
			DefDriverProc,			'DefDriverProc',		   \
			DriverCallback, 		'DriverCallback',		   \
			DrvGetModuleHandle,		'DrvGetModuleHandle',		   \
			GetDriverModuleHandle,		'GetDriverModuleHandle',	   \
			MigrateAllDrivers,		'MigrateAllDrivers',		   \
			MigrateMidiUser,		'MigrateMidiUser',		   \
			MigrateSoundEvents,		'MigrateSoundEvents',		   \
			NotifyCallbackData,		'NotifyCallbackData',		   \
			OpenDriver,			'OpenDriver',			   \
			PlaySoundA,			'PlaySoundA',			   \
			PlaySound,			'PlaySoundA',			   \
			PlaySoundW,			'PlaySoundW',			   \
			SendDriverMessage,		'SendDriverMessage',		   \
			WOW32DriverCallback,		'WOW32DriverCallback',		   \
			WOW32ResolveMultiMediaHandle,	'WOW32ResolveMultiMediaHandle',    \
			WOWAppExit,			'WOWAppExit',			   \
			WinmmLogoff,			'WinmmLogoff',			   \
			WinmmLogon,			'WinmmLogon',			   \
			aux32Message,			'aux32Message', 		   \
			auxGetDevCapsA, 		'auxGetDevCapsA',		   \
			auxGetDevCaps,			'auxGetDevCapsA',		   \
			auxGetDevCapsW, 		'auxGetDevCapsW',		   \
			auxGetNumDevs,			'auxGetNumDevs',		   \
			auxGetVolume,			'auxGetVolume', 		   \
			auxOutMessage,			'auxOutMessage',		   \
			auxSetVolume,			'auxSetVolume', 		   \
			joy32Message,			'joy32Message', 		   \
			joyConfigChanged,		'joyConfigChanged',		   \
			joyGetDevCapsA, 		'joyGetDevCapsA',		   \
			joyGetDevCaps,			'joyGetDevCapsA',		   \
			joyGetDevCapsW, 		'joyGetDevCapsW',		   \
			joyGetNumDevs,			'joyGetNumDevs',		   \
			joyGetPos,			'joyGetPos',			   \
			joyGetPosEx,			'joyGetPosEx',			   \
			joyGetThreshold,		'joyGetThreshold',		   \
			joyReleaseCapture,		'joyReleaseCapture',		   \
			joySetCapture,			'joySetCapture',		   \
			joySetThreshold,		'joySetThreshold',		   \
			mci32Message,			'mci32Message', 		   \
			mciDriverNotify,		'mciDriverNotify',		   \
			mciDriverYield, 		'mciDriverYield',		   \
			mciExecute,			'mciExecute',			   \
			mciFreeCommandResource, 	'mciFreeCommandResource',	   \
			mciGetCreatorTask,		'mciGetCreatorTask',		   \
			mciGetDeviceIDA,		'mciGetDeviceIDA',		   \
			mciGetDeviceID, 		'mciGetDeviceIDA',		   \
			mciGetDeviceIDFromElementIDA,	'mciGetDeviceIDFromElementIDA',    \
			mciGetDeviceIDFromElementID,	'mciGetDeviceIDFromElementIDA',    \
			mciGetDeviceIDFromElementIDW,	'mciGetDeviceIDFromElementIDW',    \
			mciGetDeviceIDW,		'mciGetDeviceIDW',		   \
			mciGetDriverData,		'mciGetDriverData',		   \
			mciGetErrorStringA,		'mciGetErrorStringA',		   \
			mciGetErrorString,		'mciGetErrorStringA',		   \
			mciGetErrorStringW,		'mciGetErrorStringW',		   \
			mciGetYieldProc,		'mciGetYieldProc',		   \
			mciLoadCommandResource, 	'mciLoadCommandResource',	   \
			mciSendCommandA,		'mciSendCommandA',		   \
			mciSendCommand, 		'mciSendCommandA',		   \
			mciSendCommandW,		'mciSendCommandW',		   \
			mciSendStringA, 		'mciSendStringA',		   \
			mciSendString,			'mciSendStringA',		   \
			mciSendStringW, 		'mciSendStringW',		   \
			mciSetDriverData,		'mciSetDriverData',		   \
			mciSetYieldProc,		'mciSetYieldProc',		   \
			mid32Message,			'mid32Message', 		   \
			midiConnect,			'midiConnect',			   \
			midiDisconnect, 		'midiDisconnect',		   \
			midiInAddBuffer,		'midiInAddBuffer',		   \
			midiInClose,			'midiInClose',			   \
			midiInGetDevCapsA,		'midiInGetDevCapsA',		   \
			midiInGetDevCaps,		'midiInGetDevCapsA',		   \
			midiInGetDevCapsW,		'midiInGetDevCapsW',		   \
			midiInGetErrorTextA,		'midiInGetErrorTextA',		   \
			midiInGetErrorText,		'midiInGetErrorTextA',		   \
			midiInGetErrorTextW,		'midiInGetErrorTextW',		   \
			midiInGetID,			'midiInGetID',			   \
			midiInGetNumDevs,		'midiInGetNumDevs',		   \
			midiInMessage,			'midiInMessage',		   \
			midiInOpen,			'midiInOpen',			   \
			midiInPrepareHeader,		'midiInPrepareHeader',		   \
			midiInReset,			'midiInReset',			   \
			midiInStart,			'midiInStart',			   \
			midiInStop,			'midiInStop',			   \
			midiInUnprepareHeader,		'midiInUnprepareHeader',	   \
			midiOutCacheDrumPatches,	'midiOutCacheDrumPatches',	   \
			midiOutCachePatches,		'midiOutCachePatches',		   \
			midiOutClose,			'midiOutClose', 		   \
			midiOutGetDevCapsA,		'midiOutGetDevCapsA',		   \
			midiOutGetDevCaps,		'midiOutGetDevCapsA',		   \
			midiOutGetDevCapsW,		'midiOutGetDevCapsW',		   \
			midiOutGetErrorTextA,		'midiOutGetErrorTextA', 	   \
			midiOutGetErrorText,		'midiOutGetErrorTextA', 	   \
			midiOutGetErrorTextW,		'midiOutGetErrorTextW', 	   \
			midiOutGetID,			'midiOutGetID', 		   \
			midiOutGetNumDevs,		'midiOutGetNumDevs',		   \
			midiOutGetVolume,		'midiOutGetVolume',		   \
			midiOutLongMsg, 		'midiOutLongMsg',		   \
			midiOutMessage, 		'midiOutMessage',		   \
			midiOutOpen,			'midiOutOpen',			   \
			midiOutPrepareHeader,		'midiOutPrepareHeader', 	   \
			midiOutReset,			'midiOutReset', 		   \
			midiOutSetVolume,		'midiOutSetVolume',		   \
			midiOutShortMsg,		'midiOutShortMsg',		   \
			midiOutUnprepareHeader, 	'midiOutUnprepareHeader',	   \
			midiStreamClose,		'midiStreamClose',		   \
			midiStreamOpen, 		'midiStreamOpen',		   \
			midiStreamOut,			'midiStreamOut',		   \
			midiStreamPause,		'midiStreamPause',		   \
			midiStreamPosition,		'midiStreamPosition',		   \
			midiStreamProperty,		'midiStreamProperty',		   \
			midiStreamRestart,		'midiStreamRestart',		   \
			midiStreamStop, 		'midiStreamStop',		   \
			mixerClose,			'mixerClose',			   \
			mixerGetControlDetailsA,	'mixerGetControlDetailsA',	   \
			mixerGetControlDetails, 	'mixerGetControlDetailsA',	   \
			mixerGetControlDetailsW,	'mixerGetControlDetailsW',	   \
			mixerGetDevCapsA,		'mixerGetDevCapsA',		   \
			mixerGetDevCaps,		'mixerGetDevCapsA',		   \
			mixerGetDevCapsW,		'mixerGetDevCapsW',		   \
			mixerGetID,			'mixerGetID',			   \
			mixerGetLineControlsA,		'mixerGetLineControlsA',	   \
			mixerGetLineControls,		'mixerGetLineControlsA',	   \
			mixerGetLineControlsW,		'mixerGetLineControlsW',	   \
			mixerGetLineInfoA,		'mixerGetLineInfoA',		   \
			mixerGetLineInfo,		'mixerGetLineInfoA',		   \
			mixerGetLineInfoW,		'mixerGetLineInfoW',		   \
			mixerGetNumDevs,		'mixerGetNumDevs',		   \
			mixerMessage,			'mixerMessage', 		   \
			mixerOpen,			'mixerOpen',			   \
			mixerSetControlDetails, 	'mixerSetControlDetails',	   \
			mmDrvInstall,			'mmDrvInstall', 		   \
			mmGetCurrentTask,		'mmGetCurrentTask',		   \
			mmTaskBlock,			'mmTaskBlock',			   \
			mmTaskCreate,			'mmTaskCreate', 		   \
			mmTaskSignal,			'mmTaskSignal', 		   \
			mmTaskYield,			'mmTaskYield',			   \
			mmioAdvance,			'mmioAdvance',			   \
			mmioAscend,			'mmioAscend',			   \
			mmioClose,			'mmioClose',			   \
			mmioCreateChunk,		'mmioCreateChunk',		   \
			mmioDescend,			'mmioDescend',			   \
			mmioFlush,			'mmioFlush',			   \
			mmioGetInfo,			'mmioGetInfo',			   \
			mmioInstallIOProcA,		'mmioInstallIOProcA',		   \
			mmioInstallIOProc,		'mmioInstallIOProcA',		   \
			mmioInstallIOProcW,		'mmioInstallIOProcW',		   \
			mmioOpenA,			'mmioOpenA',			   \
			mmioOpen,			'mmioOpenA',			   \
			mmioOpenW,			'mmioOpenW',			   \
			mmioRead,			'mmioRead',			   \
			mmioRenameA,			'mmioRenameA',			   \
			mmioRename,			'mmioRenameA',			   \
			mmioRenameW,			'mmioRenameW',			   \
			mmioSeek,			'mmioSeek',			   \
			mmioSendMessage,		'mmioSendMessage',		   \
			mmioSetBuffer,			'mmioSetBuffer',		   \
			mmioSetInfo,			'mmioSetInfo',			   \
			mmioStringToFOURCCA,		'mmioStringToFOURCCA',		   \
			mmioStringToFOURCC,		'mmioStringToFOURCCA',		   \
			mmioStringToFOURCCW,		'mmioStringToFOURCCW',		   \
			mmioWrite,			'mmioWrite',			   \
			mmsystemGetVersion,		'mmsystemGetVersion',		   \
			mod32Message,			'mod32Message', 		   \
			mxd32Message,			'mxd32Message', 		   \
			sndPlaySoundA,			'sndPlaySoundA',		   \
			sndPlaySound,			'sndPlaySoundA',		   \
			sndPlaySoundW,			'sndPlaySoundW',		   \
			tid32Message,			'tid32Message', 		   \
			timeBeginPeriod,		'timeBeginPeriod',		   \
			timeEndPeriod,			'timeEndPeriod',		   \
			timeGetDevCaps, 		'timeGetDevCaps',		   \
			timeGetSystemTime,		'timeGetSystemTime',		   \
			timeGetTime,			'timeGetTime',			   \
			timeKillEvent,			'timeKillEvent',		   \
			timeSetEvent,			'timeSetEvent', 		   \
			waveInAddBuffer,		'waveInAddBuffer',		   \
			waveInClose,			'waveInClose',			   \
			waveInGetDevCapsA,		'waveInGetDevCapsA',		   \
			waveInGetDevCaps,		'waveInGetDevCapsA',		   \
			waveInGetDevCapsW,		'waveInGetDevCapsW',		   \
			waveInGetErrorTextA,		'waveInGetErrorTextA',		   \
			waveInGetErrorText,		'waveInGetErrorTextA',		   \
			waveInGetErrorTextW,		'waveInGetErrorTextW',		   \
			waveInGetID,			'waveInGetID',			   \
			waveInGetNumDevs,		'waveInGetNumDevs',		   \
			waveInGetPosition,		'waveInGetPosition',		   \
			waveInMessage,			'waveInMessage',		   \
			waveInOpen,			'waveInOpen',			   \
			waveInPrepareHeader,		'waveInPrepareHeader',		   \
			waveInReset,			'waveInReset',			   \
			waveInStart,			'waveInStart',			   \
			waveInStop,			'waveInStop',			   \
			waveInUnprepareHeader,		'waveInUnprepareHeader',	   \
			waveOutBreakLoop,		'waveOutBreakLoop',		   \
			waveOutClose,			'waveOutClose', 		   \
			waveOutGetDevCapsA,		'waveOutGetDevCapsA',		   \
			waveOutGetDevCaps,		'waveOutGetDevCapsA',		   \
			waveOutGetDevCapsW,		'waveOutGetDevCapsW',		   \
			waveOutGetErrorTextA,		'waveOutGetErrorTextA', 	   \
			waveOutGetErrorText,		'waveOutGetErrorTextA', 	   \
			waveOutGetErrorTextW,		'waveOutGetErrorTextW', 	   \
			waveOutGetID,			'waveOutGetID', 		   \
			waveOutGetNumDevs,		'waveOutGetNumDevs',		   \
			waveOutGetPitch,		'waveOutGetPitch',		   \
			waveOutGetPlaybackRate, 	'waveOutGetPlaybackRate',	   \
			waveOutGetPosition,		'waveOutGetPosition',		   \
			waveOutGetVolume,		'waveOutGetVolume',		   \
			waveOutMessage, 		'waveOutMessage',		   \
			waveOutOpen,			'waveOutOpen',			   \
			waveOutPause,			'waveOutPause', 		   \
			waveOutPrepareHeader,		'waveOutPrepareHeader', 	   \
			waveOutReset,			'waveOutReset', 		   \
			waveOutRestart, 		'waveOutRestart',		   \
			waveOutSetPitch,		'waveOutSetPitch',		   \
			waveOutSetPlaybackRate, 	'waveOutSetPlaybackRate',	   \
			waveOutSetVolume,		'waveOutSetVolume',		   \
			waveOutUnprepareHeader, 	'waveOutUnprepareHeader',	   \
			waveOutWrite,			'waveOutWrite', 		   \
			wid32Message,			'wid32Message', 		   \
			winmmSetDebugLevel,		'winmmSetDebugLevel',		   \
			wod32Message,			'wod32Message'






