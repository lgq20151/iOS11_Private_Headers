/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusMoveTest : _UIFocusTest {
    unsigned long long  _activeNumberOfIterations;
    <UIFocusEnvironment> * _containerFocusEnvironment;
    unsigned long long  _currentIteration;
    unsigned long long  _currentMove;
    <_UIFocusMoveTestDataSource> * _dataSource;
    struct { 
        unsigned int isPerformingFocusMovement : 1; 
        unsigned int delegateRespondsToWillStartIteration : 1; 
        unsigned int delegateRespondsToDidFinishIteration : 1; 
        unsigned int delegateRespondsToWillMoveFocusAlongHeadingForMoveDuringIteration : 1; 
        unsigned int delegateRespondsToDidMoveFocusAlongHeadingForMoveDuringIteration : 1; 
        unsigned int dataSourceRespondsToNumberOfIterations : 1; 
        unsigned int dataSourceRespondsToMaximumNumberOfMovesDuringIteration : 1; 
        unsigned int dataSourceRespondsToDelayBeforeMoveDuringIteration : 1; 
        unsigned int dataSourceRespondsToHeadingForMoveDuringIteration : 1; 
        unsigned int dataSourceRespondsToShouldResetFocusBeforeIteration : 1; 
    }  _flags;
    unsigned long long  _maximumMovesPerIteration;
    double  _movementDelay;
    unsigned long long  _movementHeading;
    unsigned long long  _numberOfIterations;
    bool  _resetsFocusBeforeIterations;
}

@property (nonatomic) <UIFocusEnvironment> *containerFocusEnvironment;
@property (nonatomic) <_UIFocusMoveTestDataSource> *dataSource;
@property (nonatomic) <_UIFocusMoveTestDelegate> *delegate;
@property (nonatomic) unsigned long long maximumMovesPerIteration;
@property (nonatomic) double movementDelay;
@property (nonatomic) unsigned long long movementHeading;
@property (nonatomic) unsigned long long numberOfIterations;
@property (nonatomic) bool resetsFocusBeforeIterations;

- (void).cxx_destruct;
- (double)_dataSourceDelayBeforeMove:(unsigned long long)arg1 duringIteration:(unsigned long long)arg2;
- (unsigned long long)_dataSourceHeadingForMove:(unsigned long long)arg1 duringIteration:(unsigned long long)arg2;
- (unsigned long long)_dataSourceMaximumNumberOfMovesDuringIteration:(unsigned long long)arg1;
- (unsigned long long)_dataSourceNumberOfIterations;
- (bool)_dataSourceShouldResetFocusBeforeIteration:(unsigned long long)arg1;
- (void)_notifyDelegateDidFinishIteration:(unsigned long long)arg1;
- (void)_notifyDelegateDidMoveFocusAlongHeading:(unsigned long long)arg1 forMove:(unsigned long long)arg2 duringIteration:(unsigned long long)arg3;
- (void)_notifyDelegateWillMoveFocusAlongHeading:(unsigned long long)arg1 forMove:(unsigned long long)arg2 duringIteration:(unsigned long long)arg3;
- (void)_notifyDelegateWillStartIteration:(unsigned long long)arg1;
- (void)_performFocusMovement;
- (void)_performFocusMovementAfterDelayForMove:(unsigned long long)arg1 iteration:(unsigned long long)arg2;
- (void)_resetFocusIfNecessaryBeforeIteration:(unsigned long long)arg1;
- (id)containerFocusEnvironment;
- (id)dataSource;
- (id)delegate;
- (id)initWithIdentifier:(id)arg1;
- (void)main;
- (unsigned long long)maximumMovesPerIteration;
- (double)movementDelay;
- (unsigned long long)movementHeading;
- (unsigned long long)numberOfIterations;
- (void)prepareWithCompletionHandler:(id /* block */)arg1;
- (void)reset;
- (bool)resetsFocusBeforeIterations;
- (void)setContainerFocusEnvironment:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaximumMovesPerIteration:(unsigned long long)arg1;
- (void)setMovementDelay:(double)arg1;
- (void)setMovementHeading:(unsigned long long)arg1;
- (void)setNumberOfIterations:(unsigned long long)arg1;
- (void)setResetsFocusBeforeIterations:(bool)arg1;

@end
