/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFAbstractCommand : NSObject <CRReferentialCommand, NSCopying, NSSecureCoding, SFAbstractCommand> {
    struct { 
        unsigned int type : 1; 
    }  _has;
    int  _type;
    SFCommandValue * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly, copy) NSString *referenceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, retain) SFCommandValue *value;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasType;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (void)setType:(int)arg1;
- (void)setValue:(id)arg1;
- (int)type;
- (id)value;

// Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit

- (unsigned long long)crk_intrinsicInteractiveBehavior;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)referenceIdentifier;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end