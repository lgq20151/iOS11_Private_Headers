/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardBehaviorState : NSObject {
    bool  _hasAutocorrection;
    bool  _showsCandidatesInLayout;
    bool  _userSelectedCurrentCandidate;
    bool  followsZhuyin;
    bool  hardwareKeyboardMode;
    bool  hasCandidateSelected;
    bool  hasCandidates;
    bool  hasInput;
    bool  hasNextPage;
    bool  showsExtendedList;
    bool  spaceConfirmation;
}

@property (nonatomic) bool followsZhuyin;
@property (nonatomic) bool hardwareKeyboardMode;
@property (nonatomic) bool hasAutocorrection;
@property (nonatomic) bool hasCandidateSelected;
@property (nonatomic) bool hasCandidates;
@property (nonatomic) bool hasInput;
@property (nonatomic) bool hasNextPage;
@property (nonatomic) bool showsCandidatesInLayout;
@property (nonatomic) bool showsExtendedList;
@property (nonatomic) bool spaceConfirmation;
@property (nonatomic) bool userSelectedCurrentCandidate;

- (bool)followsZhuyin;
- (bool)hardwareKeyboardMode;
- (bool)hasAutocorrection;
- (bool)hasCandidateSelected;
- (bool)hasCandidates;
- (bool)hasInput;
- (bool)hasNextPage;
- (void)setFollowsZhuyin:(bool)arg1;
- (void)setHardwareKeyboardMode:(bool)arg1;
- (void)setHasAutocorrection:(bool)arg1;
- (void)setHasCandidateSelected:(bool)arg1;
- (void)setHasCandidates:(bool)arg1;
- (void)setHasInput:(bool)arg1;
- (void)setHasNextPage:(bool)arg1;
- (void)setShowsCandidatesInLayout:(bool)arg1;
- (void)setShowsExtendedList:(bool)arg1;
- (void)setSpaceConfirmation:(bool)arg1;
- (void)setUserSelectedCurrentCandidate:(bool)arg1;
- (bool)showsCandidatesInLayout;
- (bool)showsExtendedList;
- (bool)spaceConfirmation;
- (bool)userSelectedCurrentCandidate;

@end
