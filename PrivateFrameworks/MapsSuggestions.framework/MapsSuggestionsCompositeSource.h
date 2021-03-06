/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsCompositeSource : MapsSuggestionsBaseSource <MapsSuggestionsSource, MapsSuggestionsSourceDelegate> {
    NSMutableDictionary * _nextUpdateTimes;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _running;
    struct NSMutableSet { Class x1; } * _sources;
    NSObject<OS_dispatch_source> * _updateTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MapsSuggestionsSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool running;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (unsigned long long)disposition;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (void)_initUpdateTimerIfNecessary;
- (void)_scheduleNextUpdateChildSourcesWithin:(double)arg1;
- (bool)_shouldUpdateSource:(id)arg1;
- (void)_startUpdateChildSources;
- (void)_stopUpdateChildSources;
- (double)_updateChildSource:(id)arg1;
- (void)_updateChildSourcesForceAll:(bool)arg1;
- (bool)addChildSource:(id)arg1;
- (unsigned long long)addOrUpdateSuggestionEntries:(struct NSArray { Class x1; }*)arg1 source:(struct NSString { Class x1; }*)arg2 deleteMissing:(bool)arg3;
- (bool)attachSource:(id)arg1;
- (bool)canProduceEntriesOfType:(unsigned long long)arg1;
- (id)currentBestLocation;
- (void)dealloc;
- (unsigned long long)deleteEntries:(struct NSArray { Class x1; }*)arg1 source:(struct NSString { Class x1; }*)arg2;
- (bool)detachSource:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (bool)removeChildSource:(id)arg1;
- (bool)running;
- (void)setRunning:(bool)arg1;
- (void)start;
- (void)stop;
- (double)updateSuggestionEntries;

@end
