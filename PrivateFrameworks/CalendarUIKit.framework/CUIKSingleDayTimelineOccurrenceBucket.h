/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKSingleDayTimelineOccurrenceBucket : NSObject {
    CUIKSingleDayTimelineLayoutPartition * _correspondingPartition;
    NSMutableArray * _currentOccurrences;
    <CUIKSingleDayTimelineGeometryDelegate> * _geometryDelegate;
    bool  _ignoreFirstOccurrenceInFitnessCalculations;
    bool  _ignoreLastOccurrenceInFitnessCalculations;
    bool  _isOnlyBucket;
    double  _originalFitnessLevel;
    bool  _originalFitnessLevelRequiresCalculation;
    <CUIKSingleDayTimelineLayoutScreenUtils> * _screenUtilsDelegate;
    double  _temporaryFitnessLevel;
    bool  _temporaryFitnessLevelRequiresCalculation;
    <CUIKSingleDayTimelineViewItem> * _temporaryOccurrenceAtBeginning;
    <CUIKSingleDayTimelineViewItem> * _temporaryOccurrenceAtEnd;
    bool  _useTemporaryFitnessLevel;
}

@property (nonatomic, retain) CUIKSingleDayTimelineLayoutPartition *correspondingPartition;
@property (nonatomic, retain) NSMutableArray *currentOccurrences;
@property <CUIKSingleDayTimelineGeometryDelegate> *geometryDelegate;
@property (nonatomic) bool isOnlyBucket;
@property (nonatomic, readonly) NSArray *occurrences;

- (void).cxx_destruct;
- (id)_occurrencesForFitnessLevel;
- (void)addOccurrenceTemporarilyToBeginning:(id)arg1;
- (void)addOccurrenceTemporarilyToEnd:(id)arg1;
- (id)correspondingPartition;
- (id)currentOccurrences;
- (id)earliestOccurrence;
- (id)geometryDelegate;
- (id)initWithOccurrences:(id)arg1 correspondingPartition:(id)arg2 screenUtilsDelegate:(id)arg3;
- (id)initWithOccurrences:(id)arg1 correspondingPartition:(id)arg2 screenUtilsDelegate:(id)arg3 geometryDelegate:(id)arg4;
- (bool)isOnlyBucket;
- (void)makeTemporaryChangesPermanent;
- (id)occurrences;
- (void)removeOccurrenceAtBeginningTemporarily;
- (void)removeOccurrenceAtEndTemporarily;
- (void)revertTemporaryChanges;
- (void)setCorrespondingPartition:(id)arg1;
- (void)setCurrentOccurrences:(id)arg1;
- (void)setGeometryDelegate:(id)arg1;
- (void)setIsOnlyBucket:(bool)arg1;
- (void)stampFramesOntoOccurrences;

@end