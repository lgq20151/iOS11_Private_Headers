/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICInlineDrawingChangeCoalescer : NSObject {
    ICAttachment * _attachment;
    PKDrawing * _latestDrawing;
    unsigned long long  _numberOfChanges;
    ICSelectorDelayer * _processChangesSelectorDelayer;
}

@property (nonatomic, retain) ICAttachment *attachment;
@property (nonatomic, retain) PKDrawing *latestDrawing;
@property (nonatomic) unsigned long long numberOfChanges;
@property (nonatomic, retain) ICSelectorDelayer *processChangesSelectorDelayer;

- (void).cxx_destruct;
- (id)attachment;
- (void)dealloc;
- (void)drawingDataDidChange:(id)arg1;
- (bool)hasChanges;
- (id)initWithAttachment:(id)arg1;
- (id)latestDrawing;
- (void)mergeDrawingChanges;
- (unsigned long long)numberOfChanges;
- (id)processChangesSelectorDelayer;
- (void)processIndexableContent;
- (void)setAttachment:(id)arg1;
- (void)setLatestDrawing:(id)arg1;
- (void)setNumberOfChanges:(unsigned long long)arg1;
- (void)setProcessChangesSelectorDelayer:(id)arg1;
- (void)updateNowIfNecessary;

@end
