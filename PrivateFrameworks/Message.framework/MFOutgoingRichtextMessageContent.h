/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFOutgoingRichtextMessageContent : MFOutgoingMessageContent {
    NSArray * _mixedContent;
    MFPlainTextDocument * _plaintextAlternative;
    bool  _textPartsAreHTML;
}

@property (nonatomic, retain) NSArray *mixedContent;
@property (nonatomic, retain) MFPlainTextDocument *plaintextAlternative;
@property (nonatomic) bool textPartsAreHTML;

- (id)copy;
- (void)dealloc;
- (id)mixedContent;
- (id)plaintextAlternative;
- (id)richtextContent;
- (void)setMixedContent:(id)arg1;
- (void)setPlaintextAlternative:(id)arg1;
- (void)setTextPartsAreHTML:(bool)arg1;
- (bool)textPartsAreHTML;

@end
