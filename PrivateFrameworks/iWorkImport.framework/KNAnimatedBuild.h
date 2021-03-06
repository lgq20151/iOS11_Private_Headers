/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimatedBuild : NSObject {
    bool  _animateAtEndOfPreviousBuild;
    KNBuildAttributes * _attributes;
    bool  _automatic;
    long long  _buildType;
    unsigned long long  _deliveryOption;
    unsigned long long  _deliveryStyle;
    unsigned long long  _direction;
    double  _duration;
    NSString * _effectIdentifier;
    double  _endTime;
    double  _eventEndTime;
    long long  _eventIndex;
    double  _eventStartTime;
    NSDictionary * _finalAttributes;
    bool  _isMovieStartBuild;
    bool  _isVisibleAtBeginning;
    bool  _isVisibleAtEnd;
    Class  _pluginClass;
    NSDictionary * _previousAttributes;
    long long  _stageIndex;
    double  _startTime;
}

@property (nonatomic) bool animateAtEndOfPreviousBuild;
@property (nonatomic, readonly) KNBuildAttributes *attributes;
@property (nonatomic, readonly) bool automatic;
@property (nonatomic, readonly) long long buildType;
@property (nonatomic, readonly) unsigned long long deliveryOption;
@property (nonatomic, readonly) unsigned long long deliveryStyle;
@property (nonatomic, readonly) unsigned long long direction;
@property (nonatomic) double duration;
@property (nonatomic, readonly) NSString *effectIdentifier;
@property (nonatomic, readonly) double endTime;
@property (nonatomic, readonly) double eventEndTime;
@property (nonatomic) long long eventIndex;
@property (nonatomic, readonly) double eventStartTime;
@property (nonatomic, copy) NSDictionary *finalAttributes;
@property (nonatomic, readonly) bool isActionBuild;
@property (nonatomic, readonly) bool isBuildIn;
@property (nonatomic, readonly) bool isBuildOut;
@property (nonatomic, readonly) bool isDriftBuild;
@property (nonatomic, readonly) bool isEmphasisBuild;
@property (nonatomic, readonly) bool isMagicChartBuild;
@property (nonatomic) bool isMovieStartBuild;
@property (nonatomic) bool isVisibleAtBeginning;
@property (nonatomic) bool isVisibleAtEnd;
@property (nonatomic, readonly) Class pluginClass;
@property (nonatomic, copy) NSDictionary *previousAttributes;
@property (nonatomic, readonly) long long stageIndex;
@property (nonatomic, readonly) double startTime;

- (bool)animateAtEndOfPreviousBuild;
- (id)attributes;
- (bool)automatic;
- (long long)buildType;
- (void)dealloc;
- (unsigned long long)deliveryOption;
- (unsigned long long)deliveryStyle;
- (id)description;
- (unsigned long long)direction;
- (double)duration;
- (id)effectIdentifier;
- (double)endTime;
- (double)eventEndTime;
- (long long)eventIndex;
- (double)eventStartTime;
- (id)finalAttributes;
- (id)initWithBuildType:(long long)arg1 effectIdentifier:(id)arg2 attributes:(id)arg3 pluginClass:(Class)arg4 deliveryStyle:(unsigned long long)arg5 eventIndex:(long long)arg6 stageIndex:(long long)arg7 startTime:(double)arg8 eventStartTime:(double)arg9 duration:(double)arg10 direction:(unsigned long long)arg11 automatic:(bool)arg12 animateAtEndOfPreviousBuild:(bool)arg13;
- (bool)isActionBuild;
- (bool)isBuildIn;
- (bool)isBuildOut;
- (bool)isDriftBuild;
- (bool)isEmphasisBuild;
- (bool)isMagicChartBuild;
- (bool)isMovieStartBuild;
- (bool)isVisibleAtBeginning;
- (bool)isVisibleAtEnd;
- (Class)pluginClass;
- (id)previousAttributes;
- (void)setAnimateAtEndOfPreviousBuild:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setEventIndex:(long long)arg1;
- (void)setFinalAttributes:(id)arg1;
- (void)setIsMovieStartBuild:(bool)arg1;
- (void)setIsVisibleAtBeginning:(bool)arg1;
- (void)setIsVisibleAtEnd:(bool)arg1;
- (void)setPreviousAttributes:(id)arg1;
- (long long)stageIndex;
- (double)startTime;

@end
