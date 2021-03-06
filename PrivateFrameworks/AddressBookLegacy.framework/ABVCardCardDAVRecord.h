/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABVCardCardDAVRecord : ABVCardRecord

+ (bool)includeABClipRectInVCardPhotos;
+ (bool)includeImageURIInVCards;
+ (bool)includeNotesInVCards;
+ (bool)includeREVInVCards;

- (bool)useThumbnailImageFormatIfAvailable;

@end
