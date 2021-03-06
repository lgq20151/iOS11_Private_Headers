/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHTitleQuery : CHQuery {
    NSSet * _titleStrokeIdentifiers;
    NSString * _transcribedTitle;
}

@property (nonatomic, readonly, copy) NSSet *titleStrokeIdentifiers;
@property (nonatomic, readonly, copy) NSString *transcribedTitle;

- (void)_setTranscribedTitle:(id)arg1 strokeIdentifiers:(id)arg2;
- (void)dealloc;
- (id)debugName;
- (void)q_updateQueryResult;
- (id)titleStrokeIdentifiers;
- (id)transcribedTitle;
- (bool)wantsHighFrequencyNotifications;

@end
