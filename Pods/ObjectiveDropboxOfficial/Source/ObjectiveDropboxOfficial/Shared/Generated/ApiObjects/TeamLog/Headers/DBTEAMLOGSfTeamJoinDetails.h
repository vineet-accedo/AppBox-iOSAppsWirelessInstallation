///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSfTeamJoinDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SfTeamJoinDetails` struct.
///
/// Joined team member's shared folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSfTeamJoinDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Target asset position in the Assets list.
@property (nonatomic, readonly) NSNumber *targetAssetIndex;

/// Original shared folder name.
@property (nonatomic, readonly, copy) NSString *originalFolderName;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param targetAssetIndex Target asset position in the Assets list.
/// @param originalFolderName Original shared folder name.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetAssetIndex:(NSNumber *)targetAssetIndex originalFolderName:(NSString *)originalFolderName;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SfTeamJoinDetails` struct.
///
@interface DBTEAMLOGSfTeamJoinDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSfTeamJoinDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGSfTeamJoinDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSfTeamJoinDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGSfTeamJoinDetails *)instance;

///
/// Deserializes `DBTEAMLOGSfTeamJoinDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSfTeamJoinDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGSfTeamJoinDetails` object.
///
+ (DBTEAMLOGSfTeamJoinDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
