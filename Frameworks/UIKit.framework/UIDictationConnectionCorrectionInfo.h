/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationConnectionCorrectionInfo : NSObject {
    int  _alternativeSelectionCount;
    int  _characterModificationCount;
    NSString * _correctedText;
}

@property (nonatomic) int alternativeSelectionCount;
@property (nonatomic) int characterModificationCount;
@property (nonatomic, copy) NSString *correctedText;

- (void).cxx_destruct;
- (int)alternativeSelectionCount;
- (int)characterModificationCount;
- (id)correctedText;
- (void)setAlternativeSelectionCount:(int)arg1;
- (void)setCharacterModificationCount:(int)arg1;
- (void)setCorrectedText:(id)arg1;

@end
