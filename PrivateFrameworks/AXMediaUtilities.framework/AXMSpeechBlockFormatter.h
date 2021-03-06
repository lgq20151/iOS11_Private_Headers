/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMSpeechBlockFormatter : AXMSpeechFormatter {
    id /* block */  _formattingBlock;
}

@property (nonatomic, copy) id /* block */ formattingBlock;

- (void).cxx_destruct;
- (id /* block */)formattingBlock;
- (id)initWithFormattingBlock:(id /* block */)arg1;
- (void)setFormattingBlock:(id /* block */)arg1;
- (id)stringForObjectValue:(id)arg1;

@end
