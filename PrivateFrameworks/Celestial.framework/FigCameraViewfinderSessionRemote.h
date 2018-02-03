/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCameraViewfinderSessionRemote : FigCameraViewfinderSession {
    <FigCameraViewfinderSessionRemoteObject> * _remoteViewfinderSession;
    unsigned int  _state;
    FigStateMachine * _stateMachine;
}

- (void)_clientDisconnectedFromServer;
- (id)_initWithRemoteViewfinderSession:(id)arg1 delegateStorage:(id)arg2;
- (void)_previewStreamDidCloseWithStatus:(int)arg1;
- (void)_previewStreamDidOpen;
- (void)_serverDied;
- (void)_setupStateMachine;
- (void)closePreviewStream;
- (void)dealloc;
- (void)openPreviewStreamWithOptions:(id)arg1;

@end
