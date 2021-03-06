/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRTextEditingAttributesProtobuf : PBCodable <NSCopying> {
    _MRTextInputTraitsProtobuf * _inputTraits;
    NSString * _prompt;
    NSString * _title;
}

@property (nonatomic, readonly) bool hasInputTraits;
@property (nonatomic, readonly) bool hasPrompt;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) _MRTextInputTraitsProtobuf *inputTraits;
@property (nonatomic, retain) NSString *prompt;
@property (nonatomic, retain) NSString *title;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInputTraits;
- (bool)hasPrompt;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)inputTraits;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)prompt;
- (bool)readFrom:(id)arg1;
- (void)setInputTraits:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
