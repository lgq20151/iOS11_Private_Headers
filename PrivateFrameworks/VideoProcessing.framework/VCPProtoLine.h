/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPProtoLine : PBCodable <NSCopying> {
    VCPProtoPoint * _end;
    VCPProtoPoint * _start;
}

@property (nonatomic, retain) VCPProtoPoint *end;
@property (nonatomic, retain) VCPProtoPoint *start;

+ (id)lineFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)end;
- (struct CGPoint { double x1; double x2; })endPointValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEnd:(id)arg1;
- (void)setStart:(id)arg1;
- (id)start;
- (struct CGPoint { double x1; double x2; })startPointValue;
- (void)writeTo:(id)arg1;

@end