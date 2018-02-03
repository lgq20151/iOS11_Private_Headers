/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIDocumentState : NSObject <NSSecureCoding> {
    NSString * _contextAfterInput;
    NSString * _contextBeforeInput;
    NSString * _markedText;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _selectedRangeInMarkedText;
    NSString * _selectedText;
}

@property (nonatomic, readonly) NSString *contextAfterInput;
@property (nonatomic, readonly) NSString *contextBeforeInput;
@property (nonatomic, readonly) NSString *markedText;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRangeInMarkedText;
@property (nonatomic, readonly) NSString *selectedText;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (id)documentStateForTestingWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3;
+ (id)documentStateForTestingWithText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)documentStateWithContextBefore:(id)arg1 markedText:(id)arg2 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 contextAfter:(id)arg4;
+ (id)documentStateWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3;
+ (bool)supportsSecureCoding;

- (id)contextAfterInput;
- (id)contextBeforeInput;
- (void)dealloc;
- (bool)deletingBackwardsWillRemoveText;
- (id)description;
- (bool)documentIsEmpty;
- (id)documentStateAfterCollapsingSelection;
- (id)documentStateAfterCursorAdjustment:(long long)arg1;
- (id)documentStateAfterDeletingBackward;
- (id)documentStateAfterDeletingForward;
- (id)documentStateAfterInsertingText:(id)arg1;
- (id)documentStateAfterInsertingTextAfterSelection:(id)arg1;
- (id)documentStateAfterReplacingText:(id)arg1 withText:(id)arg2;
- (id)documentStateAfterSettingMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)documentStateAfterUnmarkingText;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)hashString:(id)arg1 intoHashValue:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextBefore:(id)arg1 markedText:(id)arg2 selectedText:(id)arg3 contextAfter:(id)arg4 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (id)initWithText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)inputIndexWithTerminatorPredicate:(id /* block */)arg1;
- (id)inputStemWithTerminatorPredicate:(id /* block */)arg1;
- (id)inputStringWithTerminatorPredicate:(id /* block */)arg1;
- (bool)isEqual:(id)arg1;
- (id)markedText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRangeInMarkedText;
- (id)selectedText;
- (id)wordPrefixOfString:(id)arg1 withTerminatorPredicate:(id /* block */)arg2 reverse:(bool)arg3;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)documentStateOfDocument:(id)arg1;
+ (id)documentStateOfDocumentWithRecentInputIdentifier:(id)arg1;
+ (id)documentStateOfSecureTextDocument:(id)arg1;

- (id)_contextAfterPosition:(id)arg1 inDocument:(id)arg2 toBoundary:(long long)arg3;
- (id)_contextBeforePosition:(id)arg1 inDocument:(id)arg2 toBoundary:(long long)arg3;
- (id)_positionFromPosition:(id)arg1 toPreviousWordBoundaryInDocument:(id)arg2 tokenAccumulator:(id /* block */)arg3;
- (id)_positionFromPosition:(id)arg1 toPreviousWordStartInDocument:(id)arg2 tokenAccumulator:(id /* block */)arg3;
- (id)copyTextInRange:(id)arg1 fromDocument:(id)arg2;
- (id)initWithDocument:(id)arg1;
- (id)initWithDocument:(id)arg1 contextBoundary:(long long)arg2;
- (id)initWithDocumentWithRecentInputIdentifier:(id)arg1;
- (id)initWithSecureTextDocument:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 inDocument:(id)arg3;

@end
