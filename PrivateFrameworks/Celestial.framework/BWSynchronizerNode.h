/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSynchronizerNode : BWNode {
    struct OpaqueCMClock { } * _masterClock;
    int  _newestPTSSyncHistoryElement;
    int  _oldestPTSSyncHistoryElement;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } sourceTime; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } syncedTime; 
    }  _ptsSyncHistory;
    struct OpaqueCMClock { } * _sourceClock;
}

+ (void)initialize;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })_getSyncedTimeForSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_synchronizeDetectedFaces:(id)arg1 metadata:(id)arg2 timescale:(int)arg3;
- (void)_updatePTSSyncHistoryWithSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 syncedTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)initWithMediaType:(unsigned int)arg1;
- (struct OpaqueCMClock { }*)masterClock;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)setSourceClock:(struct OpaqueCMClock { }*)arg1;
- (struct OpaqueCMClock { }*)sourceClock;

@end
