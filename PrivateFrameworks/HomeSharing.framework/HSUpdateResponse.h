/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSUpdateResponse : HSResponse {
    unsigned int  _databaseRevision;
}

@property (nonatomic) unsigned int databaseRevision;

- (unsigned int)databaseRevision;
- (void)setDatabaseRevision:(unsigned int)arg1;

@end
